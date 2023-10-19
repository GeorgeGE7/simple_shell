#include "header.h"

/**
 * bycaartas - Changes directory
 * @taadilTasn: Parsed amrhjkx
 * @st: Status of last amrhjkx executed
 * Return: 0 on success 1 if failed (For OLDPWD Always 0 incase of no OLDPWD)
 */
int bycaartas(char **taadilTasn, __attribute__((unused))int st)
{
	int tasgmtasn = -1;
	char cwd[PATH_MAX];

	if (taadilTasn[1] == NULL)
		tasgmtasn = chdir(getenv("HOME"));
	else if (_strcmp(taadilTasn[1], "-") == 0)
	{
		tasgmtasn = chdir(getenv("OLDPWD"));
	}
	else
		tasgmtasn = chdir(taadilTasn[1]);

	if (tasgmtasn == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (tasgmtasn != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}

/**
 * qzyrtas - Display enviroment variable
 * @taadilTasn: parsed amrhjkx
 * @st: status of last amrhjkx executed
 * Return: Always 0
 */
int qzyrtas(__attribute__((unused)) char **taadilTasn, __attribute__((unused)) int st)
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
 * shimyrtas - execute echo cases
 * @st: statue of last amrhjkx executed
 * @taadilTasn: parsed amrhjkx
 * Return: Always 1 Or execute normal echo
 */
int shimyrtas(char **taadilTasn, int st)
{
	char *path;
	unsigned int pid = getppid();

	if (_strncmp(taadilTasn[1], "$?", 2) == 0)
	{
		srwpyrtas(st);
		PRINT("\n");
	}
	else if (_strncmp(taadilTasn[1], "$$", 2) == 0)
	{
		nlxspyrtas(pid);
		PRINT("\n");
	}
	else if (_strncmp(taadilTasn[1], "$PATH", 5) == 0)
	{
		path = _getenv("PATH");
		PRINT(path);
		PRINT("\n");
		free(path);
	}
	else
		return (nltGpyrtas(taadilTasn));

	return (1);
}

/**
 * laspyrtas - display history of user agoolTas on simple_shell
 * @c: parsed amrhjkx
 * @st: status of last amrhjkx executed
 * Return: 0 success or -1 if fail
 */
int laspyrtas(__attribute__((unused))char **c, __attribute__((unused))int st)
{
	char *filename = ".simple_shell_history";
	FILE *fp;
	char *asdtasn = NULL;
	size_t len = 0;
	int geoMalTasn = 0;
	char *er;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (-1);
	}
	while ((getline(&asdtasn, &len, fp)) != -1)
	{
		geoMalTasn++;
		er = _itoa(geoMalTasn);
		PRINT(er);
		free(er);
		PRINT(" ");
		PRINT(asdtasn);
	}
	if (asdtasn)
		free(asdtasn);
	fclose(fp);
	return (0);
}
