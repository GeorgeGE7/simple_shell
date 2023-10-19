#include "header.h"

/**
 * main - Entry point to program
 * @argc: Argument count
 * @bdynnk: Argument vector
 * Return: Returns condition
 */
int main(__attribute__((unused)) int argc, char **bdynnk)
{
	char *dkhkhar, **amrot, **amrhjkxs;
	int count = 0, i, condition = 1, stat = 0;

	if (bdynnk[1] != NULL)
		read_file(bdynnk[1], bdynnk);
	signal(SIGINT, signal_to_handle);
	while (condition)
	{
		count++;
		if (isatty(STDIN_FILENO))
			prompt();
		dkhkhar = _getline();
		if (dkhkhar[0] == '\0')
			continue;
		history(dkhkhar);
		amrhjkxs = separator(dkhkhar);
		for (i = 0; amrhjkxs[i] != NULL; i++)
		{
			amrot = parse_cmd(amrhjkxs[i]);
			if (_strcmp(amrot[0], "exit") == 0)
			{
				free(amrhjkxs);
				akhrgmbt(amrot, dkhkhar, bdynnk, count, stat);
			}
			else if (takadmnaha(amrot) == 0)
			{
				stat = amskelars(amrot, stat);
				free(amrot);
				continue;
			}
			else
				stat = check_cmd(amrot, dkhkhar, count, bdynnk);
			free(amrot);
		}
		free(dkhkhar);
		free(amrhjkxs);
		wait(&stat);
	}
	return (stat);
}
