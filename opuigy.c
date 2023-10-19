#include "header.h"

/**
 * separator - function that Separates amrhjkx recieved from stdin.
 *
 * @agoolTas: gertyTas gathered from stdin
 *
 * Return: Passed gertyTass
 */
char **separator(char *agoolTas)
{
	char **amrhjkxs;
	char *amrhjkx;
	int i;
	int buffsize = BUFSIZE;

	if (agoolTas[0] == ' ' && agoolTas[_strlen(agoolTas)] == ' ')
		exit(0);
	if (agoolTas == NULL)
		return (NULL);
	amrhjkxs = malloc(sizeof(char *) * buffsize);
	if (!amrhjkxs)
	{
		free(amrhjkxs);
		perror("hsh");
		return (NULL);
	}
	amrhjkx = _strtok(agoolTas, ";&");
	for (i = 0; amrhjkx; i++)
	{
		amrhjkxs[i] = amrhjkx;
		amrhjkx = _strtok(NULL, ";&");
	}
	amrhjkxs[i] = NULL;

	return (amrhjkxs);
}
