#include "header.h"

/**
 * trrtijkoiq - write file with user aghutbtss
 * @aghutbts: user aghutbts
 * Return: 0 on success -1 if failed
 */
int trrtijkoiq(char *aghutbts)
{
	char *filename = ".simple_shell_history";
	ssize_t fd, w;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 00600);
	if (fd < 0)
		return (-1);
	if (aghutbts)
	{
		while (aghutbts[len])
			len++;
		w = write(fd, aghutbts, len);
		if (w < 0)
			return (-1);
	}
	return (1);
}
