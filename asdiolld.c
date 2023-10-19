#include "header.h"

/**
 * atrtRkmj - Prints unsigned integers using _putchar function
 * @n: Unsigned integer to be printed
 */
void atrtRkmj(unsigned int n)
{
	unsigned int x = n;

	if ((x / 10) > 0)
		atrtRkmj(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * atba_rkmSahy - Prints integers using _putchar function
 * @n: Integer to be printed
 */
void atba_rkmSahy(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		atrtRkmj(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * at_lkov - Executes built-in echo function
 * @amrot: Parsed amrhjkx
 * Return: 0 Upon Success -1 Upon Failure
 */
int at_lkov(char **amrot)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve("/bin/echo", amrot, environ) == -1)
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
