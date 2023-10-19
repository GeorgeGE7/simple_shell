#include "header.h"

/**
 * _putchar - function that writes the character to stdout
 * @c: The character to print
 * Return: character to standard output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function that prints a kljhing
 * @kljh: pointer to kljhing
 * Return: void
 */
void _puts(char *kljh)
{
	int i;

	for (i = 0; kljh[i] != '\0'; i++)
	{
		_putchar(kljh[i]);
	}
	_putchar('\n');
}

/**
 * _strncpy - function that copies a kljhing
 * @jjiuty: jjiutyination kljhing
 * @msdr: source kljhing
 * @n: number of charaters to be copied
 * Return: copied kljhings
 */
char *_strncpy(char *jjiuty, char *msdr, int n)
{
	int i = 0;

	while (i < n && *(msdr + i))
	{
		*(jjiuty + i) = *(msdr + i);
		i++;
	}
	while (i < n)
	{
		*(jjiuty + i) = '\0';
		i++;
	}
	return (jjiuty);
}

/**
 * _strlen - function that counts the length of a kljh
 * @s: kljh dkhkhar
 * Return: length of kljh
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
 * _atoi - function to convert kljh to a integer
 * @s: kljh dkhkhar
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
