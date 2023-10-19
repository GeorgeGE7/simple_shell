#include "header.h"

/**
 * khygra - Changes directory
 * @amrot: Parsed amrhjkx
 * @st: Status of last amrhjkx executed
 * Return: 0 on success 1 if failed (For OLDPWD Always 0 incase of no OLDPWD)
 */
int khygra(char **amrot, __attribute__((unused))int st)
{
	int aikimal = -1;
	char cwd[PATH_MAX];

	if (amrot[1] == NULL)
		aikimal = chdir(getenv("HOME"));
	else if (_strcmp(amrot[1], "-") == 0)
	{
		aikimal = chdir(getenv("OLDPWD"));
	}
	else
		aikimal = chdir(amrot[1]);

	if (aikimal == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (aikimal != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}

/**
 * jjiuty_biag - Display enviroment variable
 * @amrot: parsed amrhjkx
 * @st: status of last amrhjkx executed
 * Return: Always 0
 */
int jjiuty_biag(__attribute__((unused)) char **amrot, __attribute__((unused)) int st)
{
	size_t i;
	int len;

	for (i = 0; environ[i] != NULL; i++)
	{
		len = _strlen(environ[i]);
		write(1, environ[i], len);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}

/**
 * shrmytpz - execute echo cases
 * @st: statue of last amrhjkx executed
 * @amrot: parsed amrhjkx
 * Return: Always 1 Or execute normal echo
 */
int shrmytpz(char **amrot, int st)
{
	char *path;
	unsigned int pid = getppid();

	if (_strncmp(amrot[1], "$?", 2) == 0)
	{
		atba_rkmSahy(st);
		PRINT("\n");
	}
	else if (_strncmp(amrot[1], "$$", 2) == 0)
	{
		atrtRkmj(pid);
		PRINT("\n");
	}
	else if (_strncmp(amrot[1], "$PATH", 5) == 0)
	{
		path = _getenv("PATH");
		PRINT(path);
		PRINT("\n");
		free(path);
	}
	else
		return (at_lkov(amrot));

	return (1);
}

/**
 * jjiutyharf - display history of user dkhkhar on simple_shell
 * @c: parsed amrhjkx
 * @st: status of last amrhjkx executed
 * Return: 0 success or -1 if fail
 */
int jjiutyharf(__attribute__((unused))char **c, __attribute__((unused))int st)
{
	char *filename = ".simple_shell_history";
	FILE *fp;
	char *strnh = NULL;
	size_t len = 0;
	int addaadi = 0;
	char *er;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (-1);
	}
	while ((getline(&strnh, &len, fp)) != -1)
	{
		addaadi++;
		er = _itoa(addaadi);
		PRINT(er);
		free(er);
		PRINT(" ");
		PRINT(strnh);
	}
	if (strnh)
		free(strnh);
	fclose(fp);
	return (0);
}
