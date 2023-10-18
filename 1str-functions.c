#include "shell.h"

/**
 * ansak - a function that copies a string.
 *
 * @mkanzo: pointeer input
 * @src: pointer input
 *
 * Return: mkanzo
*/

char *ansak(char *mkanzo, char *src)
{
	int l;

	if (mkanzo == src || src == 0)
		return (mkanzo);
	for (l = 0; src[l]; l++)
		mkanzo[l] = src[l];
	mkanzo[l] = 0;
	return (mkanzo);
}

/**
 * krkr -  function that returns a pointer to a starting allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: returns a pointer to a starting allocated space in memory
 */

char *krkr(const char *str)
{
	int x, y;
	char *s;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	s = malloc(sizeof(*str) * (x + 1));

	if (s == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		s[y] = str[y];

	return (s);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int n;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || n >= WRITE_BUF_SIZE)
	{
		write(1, buf, n);
		n = 0;
	}
	if (c != BUF_FLUSH)
		buf[n++] = c;
	return (1);
}

/**
 * _hot -  a function that prints a string, followed by a start line
 * @str: a string to print
*/

void _hot(char *str)
{
	int n = 0;

	if (!str)
		return;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
}
