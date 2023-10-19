#include "header.h"

/**
 * dabbcfgTasn - Displays information on the shell by builtin amrhjkx 'env'
 */
void dabbcfgTasn(void)
{
	char *msg = "env: env\n\tPrints the current environment.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * ahmoiuy_tr - Displays information on the shell by builtin amrhjkx 'setenv'
 */
void ahmoiuy_tr(void)
{
	char *msg = "setenv: setenv [VARIABLE] [VALUE]\n\tInitializes a new";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environment variable, or modifies an existing one.\n\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * t3btgiOP - Displays information on the shellby builtin amrhjkx
 * 'unsetenv'
 */
void t3btgiOP(void)
{
	char *msg = "unsetenv: unsetenv [VARIABLE]\n\tRemoves an ";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environmental variable.\n\n\tUpon failure, prints a ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * ahnedrahwgh - display help for builtin amrhjkxs
 * @hrmotsne: parsed amrhjkx
 * @st: Status of last amrhjkx executed
 * Return: 0 Success
 */
int ahnedrahwgh(char **hrmotsne, __attribute__((unused))int st)
{
	if (!hrmotsne[1])
		hleopoiu();
	else if (_strcmp(hrmotsne[1], "alias") == 0)
		mnjkloi();
	else if (_strcmp(hrmotsne[1], "cd") == 0)
		asdqwernm();
	else if (_strcmp(hrmotsne[1], "exit") == 0)
		arabiamshya();
	else if (_strcmp(hrmotsne[1], "env") == 0)
		dabbcfgTasn();
	else if (_strcmp(hrmotsne[1], "setenv") == 0)
		ahmoiuy_tr();
	else if (_strcmp(hrmotsne[1], "unsetenv") == 0)
		t3btgiOP();
	else if (_strcmp(hrmotsne[1], "help") == 0)
		thirdwahda();
	return (0);
}
