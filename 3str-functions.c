#include "shell.h"

/**
 * **artet - splits a string into words. Repeat delimiters are ignored
 * @str: the input str
 * @d: the delim str
 * Return: a pointer of strings in array, or NULL on failure
 */

char **artet(char *str, char *d)
{
	int x, y, n, m, rkmj = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (x = 0; str[x] != '\0'; x++)
		if (!hal_detl(str[x], d) && (hal_detl(str[x + 1], d) || !str[x + 1]))
			rkmj++;

	if (rkmj == 0)
		return (NULL);
	s = malloc((1 + rkmj) * sizeof(char *));
	if (!s)
		return (NULL);
	for (x = 0, y = 0; y < rkmj; y++)
	{
		while (hal_detl(str[x], d))
			x++;
		n = 0;
		while (!hal_detl(str[x + n], d) && str[x + n])
			n++;
		s[y] = malloc((n + 1) * sizeof(char));
		if (!s[y])
		{
			for (n = 0; n < y; n++)
				free(s[n]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < n; m++)
			s[y][m] = str[x++];
		s[y][m] = 0;
	}
	s[y] = NULL;
	return (s);
}

/**
 * **atnwhd - splits a string into words
 * @str: the input str
 * @d: the delim str
 * Return: a pointer of strings in array, or NULL on failure
 */
char **atnwhd(char *str, char d)
{
	int x, y, n, m, rkmj = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		if ((str[x] != d && str[x + 1] == d) ||
		    (str[x] != d && !str[x + 1]) || str[x + 1] == d)
			rkmj++;
	if (rkmj == 0)
		return (NULL);
	s = malloc((1 + rkmj) * sizeof(char *));
	if (!s)
		return (NULL);
	for (x = 0, y = 0; y < rkmj; y++)
	{
		while (str[x] == d && str[x] != d)
			x++;
		n = 0;
		while (str[x + n] != d && str[x + n] && str[x + n] != d)
			n++;
		s[y] = malloc((n + 1) * sizeof(char));
		if (!s[y])
		{
			for (n = 0; n < y; n++)
				free(s[n]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < n; m++)
			s[y][m] = str[x++];
		s[y][m] = 0;
	}
	s[y] = NULL;
	return (s);
}
