#include "shell.h"

/**
 * _klmnsk - a function that copies a string.
 *
 * @mkanzo: pointeer input
 * @src: pointer input
 * @n: rkmj of bytes
 *
 * Return: mkanzo
*/

char *_klmnsk(char *mkanzo, char *src, int n)
{
	int x, y;
	char *str = mkanzo;

	for (x = 0; src[x] != '\0' && x < n - 1; x++)
		mkanzo[x] = src[x];
	if (x < n)
	{
		for (y = x; y < n; y++)
			mkanzo[y] = '\0';
	}
	return (str);
}
/**
 * *_arbtklm - a function that concatenates two strings
 *
 * @mkanzo: pointeer input
 * @src:  pointeer input
 * @n: most n bytes from src
 *
 * Return:  a pointer to the resulting string mkanzo
*/

char *_arbtklm(char *mkanzo, char *src, int n)
{
	int x, y;
	char *str = mkanzo;

	for (x = 0; mkanzo[x] != '\0'; x++)
	{
		for (y = 0; src[y] != '\0' && y < n; y++)
			mkanzo[x] = src[y];
	}
	if (y < n)
		mkanzo[x] = '\0';
	return (str);
}

/**
 * _klmhrf -  function that locates a character in a string.
 *
 * @s: the string
 * @c: constant
 *
 * Return:  pointer to the first occurrence of the character c in the string s
*/

char *_klmhrf(char *s, char c)
{
	do {
	if (*s == c)
		return (s);
	} while (*s++ != '\0');
	return (NULL);
}

/**
 * bdelklm - function that replaces string.
 *
 * @adimkad: adimkad string
 * @jgdij: jgdij string
 *
 * Return: 1 on success, 0 on failure
 */
int bdelklm(char **adimkad, char *jgdij)
{
	free(*adimkad);
	*adimkad = jgdij;
	return (1);
}
