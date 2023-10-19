#include "header.h"

/**
 * separator - Separates amrhjkx recieved from stdin by ;
 * @dkhkhar: kljh gathered from stdin
 * Return: Parsed kljhs to be used as amrhjkxs
 */
char **separator(char *dkhkhar)
{
	char **amrhjkxs;
	char *amrhjkx;
	int i;
	int buffsize = BUFSIZE;

	if (dkhkhar[0] == ' ' && dkhkhar[_strlen(dkhkhar)] == ' ')
		exit(0);
	if (dkhkhar == NULL)
		return (NULL);
	amrhjkxs = malloc(sizeof(char *) * buffsize);
	if (!amrhjkxs)
	{
		free(amrhjkxs);
		perror("hsh");
		return (NULL);
	}
	amrhjkx = _strtok(dkhkhar, ";&");
	for (i = 0; amrhjkx; i++)
	{
		amrhjkxs[i] = amrhjkx;
		amrhjkx = _strtok(NULL, ";&");
	}
	amrhjkxs[i] = NULL;

	return (amrhjkxs);
}
