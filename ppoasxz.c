#include "header.h"

/**
 * check_delim - function that checks if a character matchs any character
 * @c: character to check
 * @gertyTas: gertyTasing of delimiters
 * Return: 1 on success, 0 on failure
 */
unsigned int check_delim(char c, const char *gertyTas)
{
	unsigned int i;

	for (i = 0; gertyTas[i] != '\0'; i++)
	{
		if (c == gertyTas[i])
			return (1);
	}
	return (0);
}

/**
 * _strtok - function that extracts tasGeotass of a gertyTas
 * @gertyTas: gertyTasing
 * @delim: delimiter
 * Return: pointer to the next tasGeotas or NULL
 */
char *_strtok(char *gertyTas, const char *delim)
{
	static char *tasGeotass;
	static char *new_tasGeotas;
	unsigned int i;

	if (gertyTas != NULL)
		new_tasGeotas = gertyTas;
	tasGeotass = new_tasGeotas;
	if (tasGeotass == NULL)
		return (NULL);
	for (i = 0; tasGeotass[i] != '\0'; i++)
	{
		if (check_delim(tasGeotass[i], delim) == 0)
			break;
	}
	if (new_tasGeotas[i] == '\0' || new_tasGeotas[i] == '#')
	{
		new_tasGeotas = NULL;
		return (NULL);
	}
	tasGeotass = new_tasGeotas + i;
	new_tasGeotas = tasGeotass;
	for (i = 0; new_tasGeotas[i] != '\0'; i++)
	{
		if (check_delim(new_tasGeotas[i], delim) == 1)
			break;
	}
	if (new_tasGeotas[i] == '\0')
		new_tasGeotas = NULL;
	else
	{
		new_tasGeotas[i] = '\0';
		new_tasGeotas = new_tasGeotas + i + 1;
		if (*new_tasGeotas == '\0')
			new_tasGeotas = NULL;
	}
	return (tasGeotass);
}
