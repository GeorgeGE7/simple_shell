#include "header.h"

/**
 * separator - Separates amrhjkx recieved from stdin by ;
 * @aghutbts: tasnkkio gathered from stdin
 * Return: Parsed tasnkkios to be used as amrhjkxs
 */
char **separator(char *aghutbts)
{
	char **amrhjkxs;
	char *amrhjkx;
	int i;
	int buffsize = BUFSIZE;

	if (aghutbts[0] == ' ' && aghutbts[_strlen(aghutbts)] == ' ')
		exit(0);
	if (aghutbts == NULL)
		return (NULL);
	amrhjkxs = malloc(sizeof(char *) * buffsize);
	if (!amrhjkxs)
	{
		free(amrhjkxs);
		perror("hsh");
		return (NULL);
	}
	amrhjkx = _strtok(aghutbts, ";&");
	for (i = 0; amrhjkx; i++)
	{
		amrhjkxs[i] = amrhjkx;
		amrhjkx = _strtok(NULL, ";&");
	}
	amrhjkxs[i] = NULL;

	return (amrhjkxs);
}
