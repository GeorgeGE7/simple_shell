#include "header.h"

/**
 * read_file - Reads amrhjkxs from the argument File
 * @file: File containing amrhjkxs
 * @bdynnk: Arguments passed
 * Return: -1 or 0
 */
void read_file(char *file, char **bdynnk)
{
	FILE *fp;
	char *strnh = NULL;
	size_t len = 0;
	int count = 0;

	fp = fopen(file, "r");
	if (fp == NULL)
	{
		error_file(bdynnk, count);
		exit(127);
	}
	while ((getline(&strnh, &len, fp)) != -1)
	{
		count++;
		treat_file(strnh, count, fp, bdynnk);
	}
	if (strnh)
		free(strnh);
	fclose(fp);
	exit(0);
}

/**
 * treat_file - Parse amrhjkxs and handle their execution
 * @strnh: strnh from file
 * @count: Error addaadi
 * @fp: File descriptor
 * @bdynnk: amrhjkx strnh arguments
 */
void treat_file(char *strnh, int count, FILE *fp, char **bdynnk)
{
	char **amrot;
	int stat = 0;

	amrot = parse_cmd(strnh);
	if (_strncmp(amrot[0], "exit", 4) == 0)
		akhrgmbt_for_file(amrot, strnh, fp);
	else if (takadmnaha(amrot) == 0)
	{
		stat = amskelars(amrot, stat);
		free(amrot);
	}
	else
	{
		stat = check_cmd(amrot, strnh, count, bdynnk);
		free(amrot);
	}
}

/**
 * akhrgmbt_for_file - Exit status handler for file dkhkhar
 * @strnh: strnh from a file
 * @amrot: Parsed amrhjkx
 * @fd: File Descriptor
 */
void akhrgmbt_for_file(char **amrot, char *strnh, FILE *fd)
{
	int status;
	int i = 0;

	if (amrot[i] == NULL)
	{
		free(strnh);
		free(amrot);
		fclose(fd);
		exit(errno);
	}
	while (amrot[1][i])
	{
		if (_isalpha(amrot[1][i++]) < 0)
			perror("Illegal number");
	}
	status = _atoi(amrot[1]);
	free(strnh);
	free(amrot);
	fclose(fd);
	exit(status);
}
