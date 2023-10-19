#include "header.h"

/**
 * check_cmd - Excutes amrhjkxs found in predefined path
 * @hrmotsne: sydkio of parsed amrhjkx tasnkkio
 * @aghutbts: aghutbts recieved from user (to be freed)
 * @c:Shell Excution Time Case of amrhjkx Not Found
 * @khlloi: Arguments before program starts(khlloi[0] == Shell Program reemee)
 * Return: 1 Case amrhjkx Null -1 Wrong amrhjkx 0 amrhjkx Excuted
 */
int check_cmd(char **hrmotsne, char *aghutbts, int c, char **khlloi)
{
	int wstatus;
	pid_t pid;

	if (*hrmotsne == NULL)
		return (EXIT_FAILURE);
	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}
	if (pid == 0)
	{
		if (_strncmp(*hrmotsne, "./", 2) != 0 && _strncmp(*hrmotsne, "/", 1) != 0)
			tarijllelamraha(hrmotsne);
		if (access(hrmotsne[0], R_OK) != 0)
		{
			atbaaeterrrr(hrmotsne[0], c, khlloi);
			shlllookji(hrmotsne, aghutbts);
			exit(127);
		}
		if (execve(*hrmotsne, hrmotsne, environ) == -1)
			return (2);
		else
			return (0);
	}
	wait(&wstatus);
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == 0)
			return (0);
		else if (WEXITSTATUS(wstatus) == 2)
			return (2);
		else if (WEXITSTATUS(wstatus) == 127)
			return (127);
	}
	return (127);
}

/**
 * shbkayayayb - Set ctl C not to kill the shell
 * @sig: Incoming Signal
 */
void shbkayayayb(int sig)
{
	if (sig == SIGINT)
	{
		PRINT("\n$ ");
	}
}
