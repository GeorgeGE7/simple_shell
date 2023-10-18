#include "shell.h"

/**
 * rty - function that does shell loop
 *
 * @sal: structure
 * @av: argument
 *
 * Return: 0 on success, 1 on error
 */
int rty(info_t *sal, char **av)
{
	ssize_t n = 0;
	int l = 0;

	while (n != -1 && l != -2)
	{
		ams_bbtyn(sal);
		if (hal_intrer(sal))
			_hot("$ ");
		_altshar(BUF_FLUSH);
		n = ht_dakhlz(sal);
		if (n != -1)
		{
			zbt_btn(sal, av);
			l = dwr_mog(sal);
			if (l == -1)
				dowr_am(sal);
		}
		else if (hal_intrer(sal))
			_putchar('\n');
		ndf_atcv(sal, 0);
	}
	aktb_amktari(sal);
	ndf_atcv(sal, 1);
	if (!hal_intrer(sal) && sal->status)
		exit(sal->status);
	if (l == -2)
	{
		if (sal->err_rkmj == -1)
			exit(sal->status);
		exit(sal->err_rkmj);
	}
	return (l);
}

/**
 * dwr_mog - function that finds a builtin command
 *
 * @sal: structure
 *
 * Return: y
 */
int dwr_mog(info_t *sal)
{
	int x, y = -1;
	builtin_table builtintbl[] = {
		{"exit", _akhgbt},
		{"env", _byae},
		{"help", _sadniz},
		{"history", _tarikhhy},
		{"setenv", _zbtbtyq},
		{"unsetenv", _astdmp},
		{"cd", _bv},
		{"alias", _hagtmos},
		{NULL, NULL}
	};

	for (x = 0; builtintbl[x].type; x++)
		if (kelmkrn(sal->argv[0], builtintbl[x].type) == 0)
		{
			sal->line_count++;
			y = builtintbl[x].func(sal);
			break;
		}
	return (y);
}

/**
 * hat_mkn - function that finds the PATH
 *
 * @sal: structure
 * @pathstr: PATH string
 * @cmd: the path of cmd
 *
 * Return: full path of cmd if found or NULL
 */
char *hat_mkn(info_t *sal, char *pathstr, char *cmd)
{
	int x = 0, y = 0;
	char *path;

	if (!pathstr)
		return (NULL);
	if ((klmtol(cmd) > 2) && bybda(cmd, "./"))
	{
		if (hl_amr(sal, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!pathstr[x] || pathstr[x] == ':')
		{
			path = mrtn_hrf(pathstr, y, x);
			if (!*path)
				alskklm(path, cmd);
			else
			{
				alskklm(path, "/");
				alskklm(path, cmd);
			}
			if (hl_amr(sal, path))
				return (path);
			if (!pathstr[x])
				break;
			y = x;
		}
		x++;
	}
	return (NULL);
}



/**
 * mrtn_hrf - function that duplicates chars
 *
 * @pathstr: the PATH string
 * @start: first index
 * @stop: last index
 *
 * Return: pointer to start buffer.
 */
char *mrtn_hrf(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int x = 0, y = 0;

	for (y = 0, x = start; x < stop; x++)
		if (pathstr[x] != ':')
			buf[y++] = pathstr[x];
	buf[y] = 0;
	return (buf);
}
