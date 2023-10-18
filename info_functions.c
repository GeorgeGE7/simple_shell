#include "shell.h"

/**
 * ams_bbtyn - function that initializes info_t struct
 *
 * @sal: struct
 */
void ams_bbtyn(info_t *sal)
{
	sal->arg = NULL;
	sal->argv = NULL;
	sal->path = NULL;
	sal->argc = 0;
}

/**
 * zbt_btn - function that initializes info_t struct
 *
 * @sal: struct
 * @av: argument
 */
void zbt_btn(info_t *sal, char **av)
{
	int n = 0;

	sal->fasmzv = av[0];
	if (sal->arg)
	{
		sal->argv = artet(sal->arg, " \t");
		if (!sal->argv)
		{

			sal->argv = malloc(sizeof(char *) * 2);
			if (sal->argv)
			{
				sal->argv[0] = krkr(sal->arg);
				sal->argv[1] = NULL;
			}
		}
		for (n = 0; sal->argv && sal->argv[n]; n++)
			;
		sal->argc = n;

		gyr_hgu(sal);
		bdl_klmm(sal);
	}
}

/**
 * ndf_atcv - frees info_t struct fields
 * @sal: struct address
 * @all: true if freeing all fields
 */
void ndf_atcv(info_t *sal, int all)
{
	_fdyals(sal->argv);
	sal->argv = NULL;
	sal->path = NULL;
	if (all)
	{
		if (!sal->cmd_buf)
			free(sal->arg);
		if (sal->env)
			ndf_jkl(&(sal->env));
		if (sal->history)
			ndf_jkl(&(sal->history));
		if (sal->alias)
			ndf_jkl(&(sal->alias));
		_fdyals(sal->byhzxe);
			sal->byhzxe = NULL;
		knhrr((void **)sal->cmd_buf);
		if (sal->readfd > 2)
			close(sal->readfd);
		_putchar(BUF_FLUSH);
	}
}
