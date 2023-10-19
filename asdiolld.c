#include "header.h"

/**
 * nlxspyrtas - Prints unsigned integers using _putchar function
 * @n: Unsigned integer to be printed
 */
void nlxspyrtas(unsigned int n)
{
	unsigned int x = n;

	if ((x / 10) > 0)
		nlxspyrtas(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * srwpyrtas - Prints integers using _putchar function
 * @n: Integer to be printed
 */
void srwpyrtas(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		nlxspyrtas(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * nltGpyrtas - Executes built-in echo function
 * @taadilTasn: Parsed amrhjkx
 * Return: 0 Upon Success -1 Upon Failure
 */
int nltGpyrtas(char **taadilTasn)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve("/bin/echo", taadilTasn, environ) == -1)
		{
			return (-1);
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		return (-1);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
