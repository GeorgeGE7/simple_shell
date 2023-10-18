#include "shell.h"

/**
 * main - function
 * @ac: argument
 * @av: argument
 *
 * Return: 0 on success, 1 on failuer
 */
int main(int ac, char **av)
{
	info_t sal[] = { INFO_INIT };
	int fd = 2;

	asm ("mov %1, %0\n\t"
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_jhkit(av[0]);
				_jhkit(": 0: Can't open ");
				_jhkit(av[1]);
				_altshar('\n');
				_altshar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		sal->readfd = fd;
	}
	azhroxzm(sal);
	akraa_trlkj(sal);
	rty(sal, av);
	return (EXIT_SUCCESS);
}
