#include "header.h"

/**
 * main - Entry point to program
 * @argc: Argument addfrtsn
 * @khlloi: Argument vector
 * Return: Returns condition
 */
int main(__attribute__((unused)) int argc, char **khlloi)
{
	char *aghutbts, **hrmotsne, **amrhjkxs;
	int addfrtsn = 0, i, condition = 1, stat = 0;

	if (khlloi[1] != NULL)
		akakatfkjo(khlloi[1], khlloi);
	signal(SIGINT, shbkayayayb);
	while (condition)
	{
		addfrtsn++;
		if (isatty(STDIN_FILENO))
			prompt();
		aghutbts = _getline();
		if (aghutbts[0] == '\0')
			continue;
		trrtijkoiq(aghutbts);
		amrhjkxs = afslsloiowqe(aghutbts);
		for (i = 0; amrhjkxs[i] != NULL; i++)
		{
			hrmotsne = ahshhoramrt(amrhjkxs[i]);
			if (_strcmp(hrmotsne[0], "exit") == 0)
			{
				free(amrhjkxs);
				akhrgmbt(hrmotsne, aghutbts, khlloi, addfrtsn, stat);
			}
			else if (afshkhyaboamo(hrmotsne) == 0)
			{
				stat = akteldrshy(hrmotsne, stat);
				free(hrmotsne);
				continue;
			}
			else
				stat = check_cmd(hrmotsne, aghutbts, addfrtsn, khlloi);
			free(hrmotsne);
		}
		free(aghutbts);
		free(amrhjkxs);
		wait(&stat);
	}
	return (stat);
}
