#include "header.h"

/**
 * kfyayayaya - Changes directory
 * @hrmotsne: Parsed amrhjkx
 * @st: Status of last amrhjkx executed
 * Return: 0 on success 1 if failed (For OLDPWD Always 0 incase of no OLDPWD)
 */
int kfyayayaya(char **hrmotsne, __attribute__((unused))int st)
{
	int hloiuPG = -1;
	char cwd[PATH_MAX];

	if (hrmotsne[1] == NULL)
		hloiuPG = chdir(getenv("HOME"));
	else if (_strcmp(hrmotsne[1], "-") == 0)
	{
		hloiuPG = chdir(getenv("OLDPWD"));
	}
	else
		hloiuPG = chdir(hrmotsne[1]);

	if (hloiuPG == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (hloiuPG != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}

/**
 * shiaakbirgdn - Display enviroment variable
 * @hrmotsne: parsed amrhjkx
 * @st: status of last amrhjkx executed
 * Return: Always 0
 */
int shiaakbirgdn(__attribute__((unused)) char **hrmotsne, __attribute__((unused)) int st)
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
 * meshkjhya - execute echo cases
 * @st: statue of last amrhjkx executed
 * @hrmotsne: parsed amrhjkx
 * Return: Always 1 Or execute normal echo
 */
int meshkjhya(char **hrmotsne, int st)
{
	char *path;
	unsigned int pid = getppid();

	if (_strncmp(hrmotsne[1], "$?", 2) == 0)
	{
		ahahattyrq(st);
		PRINT("\n");
	}
	else if (_strncmp(hrmotsne[1], "$$", 2) == 0)
	{
		afshjybgtyp(pid);
		PRINT("\n");
	}
	else if (_strncmp(hrmotsne[1], "$PATH", 5) == 0)
	{
		path = _getenv("PATH");
		PRINT(path);
		PRINT("\n");
		free(path);
	}
	else
		return (niiiiytko(hrmotsne));

	return (1);
}

/**
 * gdaayagei - display trikhosda of user aghutbts on simple_shell
 * @c: parsed amrhjkx
 * @st: status of last amrhjkx executed
 * Return: 0 success or -1 if fail
 */
int gdaayagei(__attribute__((unused))char **c, __attribute__((unused))int st)
{
	char *filename = ".simple_shell_history";
	FILE *fp;
	char *daloyanj = NULL;
	size_t len = 0;
	int addaadi = 0;
	char *er;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (-1);
	}
	while ((getline(&daloyanj, &len, fp)) != -1)
	{
		addaadi++;
		er = _itoa(addaadi);
		PRINT(er);
		free(er);
		PRINT(" ");
		PRINT(daloyanj);
	}
	if (daloyanj)
		free(daloyanj);
	fclose(fp);
	return (0);
}
