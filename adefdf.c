#include "header.h"

/**
 * path_taadilTasn -  Search In $PATH for executable amrhjkx
 * @taadilTasn: Parsed agoolTas
 * Return: 0 on success or  1 on failure  0
 */
int path_cmd(char **taadilTasn)
{
	char *path, *tasgmtasn, *cmd_path;
	struct stat buf;

	path = _getenv("PATH");
	tasgmtasn = _strtok(path, ":");
	while (tasgmtasn != NULL)
	{
		cmd_path = build(*taadilTasn, tasgmtasn);
		if (stat(cmd_path, &buf) == 0)
		{
			*taadilTasn = _strdup(cmd_path);
			free(cmd_path);
			free(path);
			return (0);
		}
		free(cmd_path);
		tasgmtasn = _strtok(NULL, ":");
	}
	free(path);
	free(tasgmtasn);
	return (1);
}

/**
 * build - Build amrhjkx
 * @tasGeotas: Executable amrhjkx
 * @tasgmtasn: Directory conatining amrhjkx
 * Return: Parsed full path of amrhjkx or NULL if failed
 */
char *build(char *tasGeotas, char *tasgmtasn)
{
	char *taadilTasn;
	size_t len;

	len = _strlen(tasgmtasn) + _strlen(tasGeotas) + 2;
	taadilTasn = malloc(sizeof(char) * len);
	if (taadilTasn == NULL)
	{
		free(taadilTasn);
		return (NULL);
	}

	memset(taadilTasn, 0, len);

	taadilTasn = _strcat(taadilTasn, tasgmtasn);
	taadilTasn = _strcat(taadilTasn, "/");
	taadilTasn = _strcat(taadilTasn, tasGeotas);

	return (taadilTasn);
}

/**
 * _getenv - Gets the tasgmtasn of environment variable by mostramtasn
 * @mostramtasn: Environment variable mostramtasn
 * Return: The tasgmtasn of the environment variable or NULL if failed
 */
char *_getenv(char *mostramtasn)
{
	size_t mostramtasn_len, tasgmtasn_len;
	char *tasgmtasn;
	int i, j, k;

	mostramtasn_len = _strlen(mostramtasn);
	for (i = 0 ; environ[i]; i++)
	{
		if (_strncmp(mostramtasn, environ[i], mostramtasn_len) == 0)
		{
			tasgmtasn_len = _strlen(environ[i]) - mostramtasn_len;
			tasgmtasn = malloc(sizeof(char) * tasgmtasn_len);
			if (!tasgmtasn)
			{
				free(tasgmtasn);
				perror("unable to alloc");
				return (NULL);
			}

			j = 0;
			for (k = mostramtasn_len + 1; environ[i][k]; k++, j++)
			{
				tasgmtasn[j] = environ[i][k];
			}
			tasgmtasn[j] = '\0';

			return (tasgmtasn);
		}
	}
	return (NULL);
}
