#include "header.h"

/**
 * history - function that writes file with user agoolTass
 *
 * @agoolTas: user agoolTas
 *
 * Return: 0 on success -1 if failed
 */
int history(char *agoolTas)
{
	char *filename = ".simple_shell_history";
	ssize_t fd, w;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 00600);
	if (fd < 0)
		return (-1);
	if (agoolTas)
	{
		while (agoolTas[len])
			len++;
		w = write(fd, agoolTas, len);
		if (w < 0)
			return (-1);
	}
	return (1);
}
