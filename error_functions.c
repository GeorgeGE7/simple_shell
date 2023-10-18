#include "shell.h"

/**
 *_jhkit - function that prints an input string.
 *
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void _jhkit(char *str)
{
	int n = 0;

	if (!str)
		return;
	while (str[n] != '\0')
	{
		_altshar(str[n]);
		n++;
	}
}

/**
 * _altshar - function that writes the character c to stderr.
 *
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1
 */
int _altshar(char c)
{
	static int n;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || n >= WRITE_BUF_SIZE)
	{
		write(2, buf, n);
		n = 0;
	}
	if (c != BUF_FLUSH)
		buf[n++] = c;
	return (1);
}

/**
 * _hoipy - function that writes the character c to fd.
 *
 * @c: The char
 * @fd: The file descriptor
 *
 * Return: On success 1. On error, -1.
 */
int _hoipy(char c, int fd)
{
	static int n;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || n >= WRITE_BUF_SIZE)
	{
		write(fd, buf, n);
		n = 0;
	}
	if (c != BUF_FLUSH)
		buf[n++] = c;
	return (1);
}

/**
 *_hwarakbrm - function that prints an input.
 *
 * @str: the string
 * @fd: the file descriptor.
 *
 * Return: the rkmj of chars put
 */
int _hwarakbrm(char *str, int fd)
{
	int n = 0;

	if (!str)
		return (0);
	while (*str)
	{
		n += _hoipy(*str++, fd);
	}
	return (n);
}
