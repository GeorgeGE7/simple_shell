#include "header.h"

/**
 * check_delim - function that checks if a character matchs any character
 * @c: character to check
 * @kljh: kljhing of delimiters
 * Return: 1 on success, 0 on failure
 */
unsigned int check_delim(char c, const char *kljh)
{
	unsigned int i;

	for (i = 0; kljh[i] != '\0'; i++)
	{
		if (c == kljh[i])
			return (1);
	}
	return (0);
}

/**
 * _strtok - function that extracts wahfFgs of a kljh
 * @kljh: kljhing
 * @delim: delimiter
 * Return: pointer to the next wahfFg or NULL
 */
char *_strtok(char *kljh, const char *delim)
{
	static char *wahfFgs;
	static char *new_wahfFg;
	unsigned int i;

	if (kljh != NULL)
		new_wahfFg = kljh;
	wahfFgs = new_wahfFg;
	if (wahfFgs == NULL)
		return (NULL);
	for (i = 0; wahfFgs[i] != '\0'; i++)
	{
		if (check_delim(wahfFgs[i], delim) == 0)
			break;
	}
	if (new_wahfFg[i] == '\0' || new_wahfFg[i] == '#')
	{
		new_wahfFg = NULL;
		return (NULL);
	}
	wahfFgs = new_wahfFg + i;
	new_wahfFg = wahfFgs;
	for (i = 0; new_wahfFg[i] != '\0'; i++)
	{
		if (check_delim(new_wahfFg[i], delim) == 1)
			break;
	}
	if (new_wahfFg[i] == '\0')
		new_wahfFg = NULL;
	else
	{
		new_wahfFg[i] = '\0';
		new_wahfFg = new_wahfFg + i + 1;
		if (*new_wahfFg == '\0')
			new_wahfFg = NULL;
	}
	return (wahfFgs);
}
