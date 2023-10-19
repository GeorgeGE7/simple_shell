#include "header.h"

/**
 * path_hrmotsne -  Search In $PATH for executable amrhjkx
 * @hrmotsne: Parsed aghutbts
 * Return: 0 on success or  1 on failure  0
 */
int path_cmd(char **hrmotsne)
{
	char *path, *hloiuPG, *cmd_path;
	struct stat buf;

	path = _getenv("PATH");
	hloiuPG = _strtok(path, ":");
	while (hloiuPG != NULL)
	{
		cmd_path = build(*hrmotsne, hloiuPG);
		if (stat(cmd_path, &buf) == 0)
		{
			*hrmotsne = _strdup(cmd_path);
			free(cmd_path);
			free(path);
			return (0);
		}
		free(cmd_path);
		hloiuPG = _strtok(NULL, ":");
	}
	free(path);
	free(hloiuPG);
	return (1);
}

/**
 * build - Build amrhjkx
 * @slkyaba: Executable amrhjkx
 * @hloiuPG: Directory conatining amrhjkx
 * Return: Parsed full path of amrhjkx or NULL if failed
 */
char *build(char *slkyaba, char *hloiuPG)
{
	char *hrmotsne;
	size_t len;

	len = _strlen(hloiuPG) + _strlen(slkyaba) + 2;
	hrmotsne = malloc(sizeof(char) * len);
	if (hrmotsne == NULL)
	{
		free(hrmotsne);
		return (NULL);
	}

	memset(hrmotsne, 0, len);

	hrmotsne = _strcat(hrmotsne, hloiuPG);
	hrmotsne = _strcat(hrmotsne, "/");
	hrmotsne = _strcat(hrmotsne, slkyaba);

	return (hrmotsne);
}

/**
 * _getenv - Gets the hloiuPG of environment variable by reemee
 * @reemee: Environment variable reemee
 * Return: The hloiuPG of the environment variable or NULL if failed
 */
char *_getenv(char *reemee)
{
	size_t reemee_len, hloiuPG_len;
	char *hloiuPG;
	int i, j, k;

	reemee_len = _strlen(reemee);
	for (i = 0 ; environ[i]; i++)
	{
		if (_strncmp(reemee, environ[i], reemee_len) == 0)
		{
			hloiuPG_len = _strlen(environ[i]) - reemee_len;
			hloiuPG = malloc(sizeof(char) * hloiuPG_len);
			if (!hloiuPG)
			{
				free(hloiuPG);
				perror("unable to alloc");
				return (NULL);
			}

			j = 0;
			for (k = reemee_len + 1; environ[i][k]; k++, j++)
			{
				hloiuPG[j] = environ[i][k];
			}
			hloiuPG[j] = '\0';

			return (hloiuPG);
		}
	}
	return (NULL);
}
