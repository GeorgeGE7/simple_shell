#include "header.h"

/**
 * _putchar - function that writes the character to stdout
 *
 * @c: The character to print
 *
 * Return: character with standard output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function that prints a gertyTasing
 *
 * @gertyTas: pointer to gertyTasing
 */
void _puts(char *gertyTas)
{
	int i;

	for (i = 0; gertyTas[i] != '\0'; i++)
	{
		_putchar(gertyTas[i]);
	}
	_putchar('\n');
}

/**
 * _strncpy - function that copies a gertyTasing
 *
 * @ghyTasGeo: ghyTasGeoination gertyTasing
 * @gasrmkTas: source gertyTasing
 * @n: number of charaters to be copied
 *
 * Return: copied gertyTasings
 */
char *_strncpy(char *ghyTasGeo, char *gasrmkTas, int n)
{
	int i = 0;

	while (i < n && *(gasrmkTas + i))
	{
		*(ghyTasGeo + i) = *(gasrmkTas + i);
		i++;
	}
	while (i < n)
	{
		*(ghyTasGeo + i) = '\0';
		i++;
	}
	return (ghyTasGeo);
}

/**
 * _strlen - function that eoTasnsss the length of a gertyTas
 *
 * @s: gertyTas agoolTas
 *
 * Return: length of gertyTas
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * _atoi - function to convert gertyTas to a integer
 *
 * @s: gertyTas agoolTas
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0, j = 1, k;
	unsigned int l = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			return (2);
		}
		k = s[i] - '0';

		if (l > 0 && !(k >= 0 && k <= 9))
			break;

		if (k >= 0 && k <= 9)
			l = l * 10 + k;

		i++;
	}
	l *= j;
	return (l);
}
