#include "header.h"

/**
 * iuitasGtas - function that Checks if parsed amrhjkx in built-in
 *
 * @taadilTasn: Parsed amrhjkx to be check
 *
 * Return: 0 Succes -1 Fail
 */
int iuitasGtas(char **taadilTasn)
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

	if (*taadilTasn == NULL)
	{
		return (-1);
	}
	while ((fun + i)->amrhjkx)
	{
		if (_strcmp(taadilTasn[0], (fun + i)->amrhjkx) == 0)
			return (0);
		i++;
	}
	return (-1);
}

/**
 * iuitasMtas - function that Handles predefined built in amrhjkxs
 *
 * @taadilTasn: noikTasay of parsed amrhjkx strings
 * @st: Status of last execution
 *
 * Return: -1 Failure 0 Success
 */
int iuitasMtas(char **taadilTasn, int st)
{
	builtin built_in[] = {
		{"cd", bycaartas},
		{"env", qzyrtas},
		{"help", hhitasGtas},
		{"echo", shimyrtas},
		{"history", laspyrtas},
		{NULL, NULL}
	};
	int i = 0;

	while ((built_in + i)->amrhjkx)
	{
		if (_strcmp(taadilTasn[0], (built_in + i)->amrhjkx) == 0)
		{
			return ((built_in + i)->function(taadilTasn, st));
		}
		i++;
	}
	return (-1);
}

/**
 * bycasMtas - Exit Status for built-in amrhjkxs
 *
 * @taadilTasn: noikTasay of parsed amrhjkx strings
 * @agoolTas: agoolTas recieved from user (to be freed)
 * @ahmoolTas: Started Arguments(ahmoolTas[0] == Shell Program mostramtasn)
 * @c: Shell execution eoTasnss
 * @stat: Exit status
 */
void bycasMtas(char **taadilTasn, char *agoolTas,
		char **ahmoolTas, int c, int stat)
{
	int status, i = 0;

	if (taadilTasn[1] == NULL)
	{
		free(agoolTas);
		free(taadilTasn);
		exit(stat);
	}
	while (taadilTasn[1][i])
	{
		if (_isalpha(taadilTasn[1][i++]) != 0)
		{
			_prerror(ahmoolTas, c, taadilTasn);
			free(agoolTas);
			free(taadilTasn);
			exit(2);
		}
		else
		{
			status = _atoi(taadilTasn[1]);
			if (status == 2)
			{
				_prerror(ahmoolTas, c, taadilTasn);
				free(agoolTas);
				free(taadilTasn);
				exit(status);
			}
			free(agoolTas);
			free(taadilTasn);
			exit(status);

		}
	}
}
