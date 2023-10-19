#include "header.h"

/**
 * read_file - function that Reads file from the dir
 *
 * @file: File to read
 * @ahmoolTas: Arguments
 *
 * Return: -1 on failure or 0 on success
 */
void read_file(char *file, char **ahmoolTas)
{
	FILE *fp;
	char *asdtasn = NULL;
	size_t len = 0;
	int eoTasnss = 0;

	fp = fopen(file, "r");
	if (fp == NULL)
	{
		error_file(ahmoolTas, eoTasnss);
		exit(127);
	}
	while ((getline(&asdtasn, &len, fp)) != -1)
	{
		eoTasnss++;
		treat_file(asdtasn, eoTasnss, fp, ahmoolTas);
	}
	if (asdtasn)
		free(asdtasn);
	fclose(fp);
	exit(0);
}

/**
 * treat_file - Parse amrhjkxs and handle their execution
 *
 * @asdtasn: asdtasn from file
 * @eoTasnss: Error geoMalTasn
 * @fp: File scriptor
 * @ahmoolTas: arguments
 */
void treat_file(char *asdtasn, int eoTasnss, FILE *fp, char **ahmoolTas)
{
	char **taadilTasn;
	int stat = 0;

	taadilTasn = parse_cmd(asdtasn);
	if (_strncmp(taadilTasn[0], "exit", 4) == 0)
		bycasMtas_for_file(taadilTasn, asdtasn, fp);
	else if (iuitasGtas(taadilTasn) == 0)
	{
		stat = iuitasMtas(taadilTasn, stat);
		free(taadilTasn);
	}
	else
	{
		stat = check_cmd(taadilTasn, asdtasn, eoTasnss, ahmoolTas);
		free(taadilTasn);
	}
}

/**
 * bycasMtas_for_file - function that Exits status handler for file agoolTas
 *
 * @asdtasn: pram
 * @taadilTasn: pram
 * @fd: File Descriptor
 */
void bycasMtas_for_file(char **taadilTasn, char *asdtasn, FILE *fd)
{
	int status;
	int i = 0;

	if (taadilTasn[i] == NULL)
	{
		free(asdtasn);
		free(taadilTasn);
		fclose(fd);
		exit(errno);
	}
	while (taadilTasn[1][i])
	{
		if (_isalpha(taadilTasn[1][i++]) < 0)
			perror("Illegal number");
	}
	status = _atoi(taadilTasn[1]);
	free(asdtasn);
	free(taadilTasn);
	fclose(fd);
	exit(status);
}
