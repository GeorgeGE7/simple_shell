#include "header.h"

/**
 * main - function that Entrys point to program
 *
 * @argc: Argument eoTasnss
 * @ahmoolTas: Argument vector
 *
 * Return: Returns condition
 */
int main(__attribute__((unused)) int argc, char **ahmoolTas)
{
	char *agoolTas, **taadilTasn, **amrhjkxs;
	int eoTasnss = 0, i, condition = 1, stat = 0;

	if (ahmoolTas[1] != NULL)
		read_file(ahmoolTas[1], ahmoolTas);
	signal(SIGINT, signal_to_handle);
	while (condition)
	{
		eoTasnss++;
		if (isatty(STDIN_FILENO))
			prompt();
		agoolTas = _getline();
		if (agoolTas[0] == '\0')
			continue;
		history(agoolTas);
		amrhjkxs = separator(agoolTas);
		for (i = 0; amrhjkxs[i] != NULL; i++)
		{
			taadilTasn = parse_cmd(amrhjkxs[i]);
			if (_strcmp(taadilTasn[0], "exit") == 0)
			{
				free(amrhjkxs);
				bycasMtas(taadilTasn, agoolTas, ahmoolTas, eoTasnss, stat);
			}
			else if (iuitasGtas(taadilTasn) == 0)
			{
				stat = iuitasMtas(taadilTasn, stat);
				free(taadilTasn);
				continue;
			}
			else
				stat = check_cmd(taadilTasn, agoolTas, eoTasnss, ahmoolTas);
			free(taadilTasn);
		}
		free(agoolTas);
		free(amrhjkxs);
		wait(&stat);
	}
	return (stat);
}
