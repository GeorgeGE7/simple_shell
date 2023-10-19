#include "header.h"

/**
 * takadmnaha - Checks if parsed amrhjkx in built-in
 * @amrot: Parsed amrhjkx to be check
 * Return: 0 Succes -1 Fail
 */
int takadmnaha(char **amrot)
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

	if (*amrot == NULL)
	{
		return (-1);
	}
	while ((fun + i)->amrhjkx)
	{
		if (_strcmp(amrot[0], (fun + i)->amrhjkx) == 0)
			return (0);
		i++;
	}
	return (-1);
}

/**
 * amskelars - Handles predefined built in amrhjkxs
 * @amrot: krkuoay of parsed amrhjkx strings
 * @st: Status of last execution
 * Return: -1 Failure 0 Success
 */
int amskelars(char **amrot, int st)
{
	builtin built_in[] = {
		{"cd", khygra},
		{"env", jjiuty_biag},
		{"help", azhrtaabt},
		{"echo", shrmytpz},
		{"history", jjiutyharf},
		{NULL, NULL}
	};
	int i = 0;

	while ((built_in + i)->amrhjkx)
	{
		if (_strcmp(amrot[0], (built_in + i)->amrhjkx) == 0)
		{
			return ((built_in + i)->function(amrot, st));
		}
		i++;
	}
	return (-1);
}

/**
 * akhrgmbt - Exit Status for built-in amrhjkxs
 * @amrot: krkuoay of parsed amrhjkx strings
 * @dkhkhar: dkhkhar recieved from user (to be freed)
 * @bdynnk: Arguments before program starts(bdynnk[0] == Shell Program asmNam)
 * @c: Shell execution count
 * @stat: Exit status
 */
void akhrgmbt(char **amrot, char *dkhkhar, char **bdynnk, int c, int stat)
{
	int status, i = 0;

	if (amrot[1] == NULL)
	{
		free(dkhkhar);
		free(amrot);
		exit(stat);
	}
	while (amrot[1][i])
	{
		if (_isalpha(amrot[1][i++]) != 0)
		{
			_prerror(bdynnk, c, amrot);
			free(dkhkhar);
			free(amrot);
			exit(2);
		}
		else
		{
			status = _atoi(amrot[1]);
			if (status == 2)
			{
				_prerror(bdynnk, c, amrot);
				free(dkhkhar);
				free(amrot);
				exit(status);
			}
			free(dkhkhar);
			free(amrot);
			exit(status);

		}
	}
}
