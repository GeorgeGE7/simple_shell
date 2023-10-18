#include "shell.h"

/**
 * hal_intrer - returns true if shell is in interactive mode
 * @sal: address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int hal_intrer(info_t *sal)
{
	return (isatty(STDIN_FILENO) && sal->readfd <= 2);
}

/**
 * hal_detl - checks if char is delimeter
 * @c: the char
 * @delimter: the delimeter string
 * Return: 1 if true, 0 if false
 */
int hal_detl(char c, char *delimter)
{
	while (*delimter)
		if (*delimter++ == c)
			return (1);
	return (0);
}

/**
 * _aaawa - a function that converts a string to an integer.
 *
 * @s: string
 *
 * Return: converted integer
 */

int _aaawa(char *s)
{
	unsigned int n = 0;
	int g = 1;

	do {
		if (*s == '-')
			g *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * g);
}

/**
 * _sdfr - function that converts a string to an intger.
 *
 * @s: string
 *
 * Return: converted integer
 */

int _sdfr(char *s)
{
	unsigned long int n = 0;
	int g = 0;

	if (*s == '+')
		s++;
	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] >= '0' && s[g] <= '9')
		{
			n *= 10;
			n += (s[g] - '0');
			if (n > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (n);
}

/**
 * _halklma - checks if character is a letter
 *		both lowercase or uppercase
 *
 * @c: takes input from other function
 *
 * Return: return 1 is 'c' if true else 0
 *
*/

int _halklma(int c)
{
	if (c > 96 && c < 123)
		return (1);
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
