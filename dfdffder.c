#include "header.h"

/**
 * sad_elbyal - Displays information on the shell by builtin amrhjkx 'env'
 */
void sad_elbyal(void)
{
	char *msg = "env: env\n\tPrints the current environment.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * saaf_ytoz - Displays information on the shell by builtin amrhjkx 'setenv'
 */
void saaf_ytoz(void)
{
	char *msg = "setenv: setenv [VARIABLE] [VALUE]\n\tInitializes a new";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environment variable, or modifies an existing one.\n\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * saPvz - Displays information on the shellby builtin amrhjkx
 * 'unsetenv'
 */
void saPvz(void)
{
	char *msg = "unsetenv: unsetenv [VARIABLE]\n\tRemoves an ";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environmental variable.\n\n\tUpon failure, prints a ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * azhrtaabt - display help for builtin amrhjkxs
 * @amrot: parsed amrhjkx
 * @st: Status of last amrhjkx executed
 * Return: 0 Success
 */
int azhrtaabt(char **amrot, __attribute__((unused))int st)
{
	if (!amrot[1])
		sakolLO();
	else if (_strcmp(amrot[1], "alias") == 0)
		sa_alwop();
	else if (_strcmp(amrot[1], "cd") == 0)
		sad_asrhr();
	else if (_strcmp(amrot[1], "exit") == 0)
		cadoykrg();
	else if (_strcmp(amrot[1], "env") == 0)
		sad_elbyal();
	else if (_strcmp(amrot[1], "setenv") == 0)
		saaf_ytoz();
	else if (_strcmp(amrot[1], "unsetenv") == 0)
		saPvz();
	else if (_strcmp(amrot[1], "help") == 0)
		hbl_taloyx();
	return (0);
}
