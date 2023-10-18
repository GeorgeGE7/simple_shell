#include "shell.h"

/**
 * hl_amr - function
 *
 * @sal: structure
 * @path: path dir
 *
 * Return: 1 on success, 0 on false
 */
int hl_amr(info_t *sal, char *path)
{
	struct stat st;

	(void)sal;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}


/**
 * dowr_am - function that finds a path of command
 *
 * @sal: structure
 */
void dowr_am(info_t *sal)
{
	char *path = NULL;
	int x, y;

	sal->path = sal->argv[0];
	if (sal->addkhtt_flag == 1)
	{
		sal->line_count++;
		sal->addkhtt_flag = 0;
	}
	for (x = 0, y = 0; sal->arg[x]; x++)
		if (!hal_detl(sal->arg[x], " \t\n"))
			y++;
	if (!y)
		return;

	path = hat_mkn(sal, _ahafsm(sal, "PATH="), sal->argv[0]);
	if (path)
	{
		sal->path = path;
		get_amr(sal);
	}
	else
	{
		if ((hal_intrer(sal) || _ahafsm(sal, "PATH=")
			|| sal->argv[0][0] == '/') && hl_amr(sal, sal->argv[0]))
			get_amr(sal);
		else if (*(sal->arg) != '\n')
		{
			sal->status = 127;
			atba_mosh(sal, "not found\n");
		}
	}
}

/**
 * get_amr - function runs cmd
 *
 * @sal: structure
 */
void get_amr(info_t *sal)
{
	pid_t ch;

	ch = fork();
	if (ch == -1)
	{

		perror("Error:");
		return;
	}
	if (ch == 0)
	{
		if (execve(sal->path, sal->argv, hat_bysdg(sal)) == -1)
		{
			ndf_atcv(sal, 1);
			if (errno == EACCES)
				exit(126);
			exit(1);
		}

	}
	else
	{
		wait(&(sal->status));
		if (WIFEXITED(sal->status))
		{
			sal->status = WEXITSTATUS(sal->status);
			if (sal->status == 126)
				atba_mosh(sal, "Permission denied\n");
		}
	}
}
