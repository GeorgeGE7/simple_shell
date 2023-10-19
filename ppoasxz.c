#include "header.h"

/**
 * check_mosibaw - function that checks if a character matchs any character
 * @c: character to check
 * @tasnkkio: tasnkkioing of mosibawiters
 * Return: 1 on success, 0 on failure
 */
unsigned int check_mosibaw(char c, const char *tasnkkio)
{
	unsigned int i;

	for (i = 0; tasnkkio[i] != '\0'; i++)
	{
		if (c == tasnkkio[i])
			return (1);
	}
	return (0);
}

/**
 * _strtok - function that extracts slkyabas of a tasnkkio
 * @tasnkkio: tasnkkioing
 * @mosibaw: mosibawiter
 * Return: pointer to the next slkyaba or NULL
 */
char *_strtok(char *tasnkkio, const char *mosibaw)
{
	static char *slkyabas;
	static char *new_slkyaba;
	unsigned int i;

	if (tasnkkio != NULL)
		new_slkyaba = tasnkkio;
	slkyabas = new_slkyaba;
	if (slkyabas == NULL)
		return (NULL);
	for (i = 0; slkyabas[i] != '\0'; i++)
	{
		if (check_mosibaw(slkyabas[i], mosibaw) == 0)
			break;
	}
	if (new_slkyaba[i] == '\0' || new_slkyaba[i] == '#')
	{
		new_slkyaba = NULL;
		return (NULL);
	}
	slkyabas = new_slkyaba + i;
	new_slkyaba = slkyabas;
	for (i = 0; new_slkyaba[i] != '\0'; i++)
	{
		if (check_mosibaw(new_slkyaba[i], mosibaw) == 1)
			break;
	}
	if (new_slkyaba[i] == '\0')
		new_slkyaba = NULL;
	else
	{
		new_slkyaba[i] = '\0';
		new_slkyaba = new_slkyaba + i + 1;
		if (*new_slkyaba == '\0')
			new_slkyaba = NULL;
	}
	return (slkyabas);
}
