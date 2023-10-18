#include "shell.h"

/**
 * shil_hklm - function replaces first instance of '#' with '\0'
 * @buf: address of the string
 *
 * Return: Always 0;
 */
void shil_hklm(char *buf)
{
	int n;

	for (n = 0; buf[n] != '\0'; n++)
		if (buf[n] == '#' && (!n || buf[n - 1] == ' '))
		{
			buf[n] = '\0';
			break;
		}
}

/**
 * khyrrkm - function that convert intger to string
 * @rkmj: rkmjber
 * @base: base
 * @flags: argument
 *
 * Return: string
 */
char *khyrrkm(long int rkmj, int base, int flags)
{
	static char *ar;
	static char buf[50];
	char sign = 0;
	char *ptr;
	unsigned long n = rkmj;

	if (!(flags & CONVERT_UNSIGNED) && rkmj < 0)
	{
		n = -rkmj;
		sign = '-';

	}
	ar = flags & CONVERT_LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buf[49];
	*ptr = '\0';

	do	{
		*--ptr = ar[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}


/**
 * atba_mosh - prints an error message
 * @sal: the parameter & return sal struct
 * @errstr: string containing specified error type
 * Return: 0 if no rkmjbers in string, converted rkmjber otherwise
 *        -1 on error
 */
void atba_mosh(info_t *sal, char *errstr)
{
	_jhkit(sal->fasmzv);
	_jhkit(": ");
	atbb_h(sal->line_count, STDERR_FILENO);
	_jhkit(": ");
	_jhkit(sal->argv[0]);
	_jhkit(": ");
	_jhkit(errstr);
}

/**
 * atbb_h - function prints a decimal (integer) rkmjber (base 10)
 * @input: the input
 * @fd: the filedescriptor to write to
 *
 * Return: rkmjber of characters printed
 */
int atbb_h(int input, int fd)
{
	int (*__putchar)(char) = _putchar;
	int x, y = 0;
	unsigned int _abs_, kaimhj;

	if (fd == STDERR_FILENO)
		__putchar = _altshar;
	if (input < 0)
	{
		_abs_ = -input;
		__putchar('-');
		y++;
	}
	else
		_abs_ = input;
	kaimhj = _abs_;
	for (x = 1000000000; x > 1; x /= 10)
	{
		if (_abs_ / x)
		{
			__putchar('0' + kaimhj / x);
			y++;
		}
		kaimhj %= x;
	}
	__putchar('0' + kaimhj);
	y++;

	return (y);
}
