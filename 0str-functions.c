#include "shell.h"

/**
 * klmtol -  a function that returns the length of a string.
 * @s : input str
 *
 * Return: the length of a string.
*/

int klmtol(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;

	return (len);
}

/**
 * kelmkrn - a function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: -1 or 1 or 0
*/

int kelmkrn(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}


/**
 * *alskklm - a function that concatenates two strings
 *
 * @mkanzo: pointeer input
 * @src:  pointeer input
 *
 * Return:  a pointer to the resulting string mkanzo
*/

char *alskklm(char *mkanzo, char *src)
{
	int n, i;

	n = 0;

	while (mkanzo[n])
		n++;

	for (i = 0; src[i]; i++)
	{
		mkanzo[n] = src[i];
		n++;
	}
	return (mkanzo);
}

/**
 * bybda - function that cheakes if mhtagle starts with hayastack.
 *
 * @saltay: string
 * @mhtagle: string
 *
 * Return: pointer to next char
*/

char *bybda(const char *saltay, const char *mhtagle)
{
	while (*mhtagle)
	if (*mhtagle++ != *saltay++)
		return (NULL);
	return ((char *)saltay);
}
