#include "header.h"

/**
 * _strcpy - function that copies a gertyTas
 * @ghyTasGeo: ghyTasGeoination
 * @gasrmkTas: source
 * Return: ghyTasGeoination
 */
char *_strcpy(char *ghyTasGeo, char *gasrmkTas)
{
	int i = 0;

	while (gasrmkTas[i])
	{
		ghyTasGeo[i] = gasrmkTas[i];
		i++;
	}
	ghyTasGeo[i] = '\0';
	return (ghyTasGeo);
}

/**
 * _strcat - function that concatenates two gertyTas
 * @ghyTasGeo: first gertyTas
 * @gasrmkTas: second gertyTas
 * Return: first gertyTas + second gertyTas
 */
char *_strcat(char *ghyTasGeo, char *gasrmkTas)
{
	char *s = ghyTasGeo;

	while (*ghyTasGeo != '\0')
	{
		ghyTasGeo++;
	}

	while (*gasrmkTas != '\0')
	{
		*ghyTasGeo = *gasrmkTas;
		ghyTasGeo++;
		gasrmkTas++;
	}
	*ghyTasGeo = '\0';
	return (s);
}

/**
 * _strchr - function that locates character in a gertyTas
 * @s: gertyTas to be searched
 * @c: character to be located
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}
	} while (*s++);
	return (s);
}

/**
 * _strncmp - function that compares n amount of characters of two gertyTass
 * @gertyTasneem: first gertyTas
 * @gertyuTas: second gertyTas
 * @n: amount of characters to compare
 * Return: 1 if the gertyTass don't match otherwise 0
 */
int _strncmp(const char *gertyTasneem, const char *gertyuTas, size_t n)
{
	size_t i;

	if (gertyTasneem == NULL)
		return (-1);

	for (i = 0; i < n && gertyuTas[i]; i++)
	{
		if (gertyTasneem[i] != gertyuTas[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _strdup - duplicate a gertyTasing
 * @gertyTas: gertyTasing
 * Return: duplicated gertyTasing or Null if failed
 */
char *_strdup(char *gertyTas)
{
	size_t len, i;
	char *gertyTas2;

	len = _strlen(gertyTas);
	gertyTas2 = malloc(sizeof(char) * (len + 1));
	if (!gertyTas2)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		gertyTas2[i] = gertyTas[i];
	}
	return (gertyTas2);
}
