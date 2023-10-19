#include "header.h"

/**
 * funtasn - Displays information on the shell by builtin amrhjkx 'env'
 */
void funtasn(void)
{
	char *msg = "env: env\n\tPrints the current environment.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * funtasntasn - Displays information on the shell by builtin amrhjkx 'setenv'
 */
void funtasntasn(void)
{
	char *msg = "setenv: setenv [VARIABLE] [VALUE]\n\tInitializes a new";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environment variable, or modifies an existing one.\n\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * newasntasn - Displays information on the shellby builtin amrhjkx
 * 'unsetenv'
 */
void newasntasn(void)
{
	char *msg = "unsetenv: unsetenv [VARIABLE]\n\tRemoves an ";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environmental variable.\n\n\tUpon failure, prints a ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * hhitasGtas - display help for builtin amrhjkxs
 * @taadilTasn: parsed amrhjkx
 * @st: Status of last amrhjkx executed
 * Return: 0 Success
 */
int hhitasGtas(char **taadilTasn, __attribute__((unused))int st)
{
	if (!taadilTasn[1])
		gnewasntas();
	else if (_strcmp(taadilTasn[1], "alias") == 0)
		getwasntas();
	else if (_strcmp(taadilTasn[1], "cd") == 0)
		mdtoitas();
	else if (_strcmp(taadilTasn[1], "exit") == 0)
		mdtoitasGtas();
	else if (_strcmp(taadilTasn[1], "env") == 0)
		funtasn();
	else if (_strcmp(taadilTasn[1], "setenv") == 0)
		funtasntasn();
	else if (_strcmp(taadilTasn[1], "unsetenv") == 0)
		newasntasn();
	else if (_strcmp(taadilTasn[1], "help") == 0)
		ntoitasGtas();
	return (0);
}
