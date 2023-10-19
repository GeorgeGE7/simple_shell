#include "header.h"

/**
 * takadmnaha - Checks if parsed amrhjkx in built-in
 * @hrmotsne: Parsed amrhjkx to be check
 * Return: 0 Succes -1 Fail
 */
int takadmnaha(char **hrmotsne)
{
	builtin fun[] = {
		{"cd", NULL},
		{"help", NULL},
		{"echo", NULL},
		{"env", NULL},
		{"history", NULL},
		{NULL, NULL}
	};
	int i = 0;

	if (*hrmotsne == NULL)
	{
		return (-1);
	}
	while ((fun + i)->amrhjkx)
	{
		if (_strcmp(hrmotsne[0], (fun + i)->amrhjkx) == 0)
			return (0);
		i++;
	}
	return (-1);
}

/**
 * amskelars - Handles predefined built in amrhjkxs
 * @hrmotsne: sydkioay of parsed amrhjkx strings
 * @st: Status of last execution
 * Return: -1 Failure 0 Success
 */
int amskelars(char **hrmotsne, int st)
{
	builtin built_in[] = {
		{"cd", khygra},
		{"env", ahmsger_biag},
		{"help", azhrtaabt},
		{"echo", shrmytpz},
		{"history", ahmsgerharf},
		{NULL, NULL}
	};
	int i = 0;

	while ((built_in + i)->amrhjkx)
	{
		if (_strcmp(hrmotsne[0], (built_in + i)->amrhjkx) == 0)
		{
			return ((built_in + i)->function(hrmotsne, st));
		}
		i++;
	}
	return (-1);
}

/**
 * akhrgmbt - Exit Status for built-in amrhjkxs
 * @hrmotsne: sydkioay of parsed amrhjkx strings
 * @aghutbts: aghutbts recieved from user (to be freed)
 * @khlloi: Arguments before program starts(khlloi[0] == Shell Program reemee)
 * @c: Shell execution addfrtsn
 * @stat: Exit status
 */
void akhrgmbt(char **hrmotsne, char *aghutbts, char **khlloi, int c, int stat)
{
	int status, i = 0;

	if (hrmotsne[1] == NULL)
	{
		free(aghutbts);
		free(hrmotsne);
		exit(stat);
	}
	while (hrmotsne[1][i])
	{
		if (_isalpha(hrmotsne[1][i++]) != 0)
		{
			_prerror(khlloi, c, hrmotsne);
			free(aghutbts);
			free(hrmotsne);
			exit(2);
		}
		else
		{
			status = _atoi(hrmotsne[1]);
			if (status == 2)
			{
				_prerror(khlloi, c, hrmotsne);
				free(aghutbts);
				free(hrmotsne);
				exit(status);
			}
			free(aghutbts);
			free(hrmotsne);
			exit(status);

		}
	}
}
