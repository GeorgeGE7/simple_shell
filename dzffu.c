#include "header.h"

/**
 * akakatfkjo - Reads amrhjkxs from the argument File
 * @file: File containing amrhjkxs
 * @khlloi: Arguments passed
 * Return: -1 or 0
 */
void akakatfkjo(char *file, char **khlloi)
{
	FILE *fp;
	char *daloyanj = NULL;
	size_t len = 0;
	int addfrtsn = 0;

	fp = fopen(file, "r");
	if (fp == NULL)
	{
		mlfghltfshk(khlloi, addfrtsn);
		exit(127);
	}
	while ((getline(&daloyanj, &len, fp)) != -1)
	{
		addfrtsn++;
		treat_file(daloyanj, addfrtsn, fp, khlloi);
	}
	if (daloyanj)
		free(daloyanj);
	fclose(fp);
	exit(0);
}

/**
 * treat_file - Parse amrhjkxs and handle their execution
 * @daloyanj: daloyanj from file
 * @addfrtsn: Error addaadi
 * @fp: File descriptor
 * @khlloi: amrhjkx daloyanj arguments
 */
void treat_file(char *daloyanj, int addfrtsn, FILE *fp, char **khlloi)
{
	char **hrmotsne;
	int stat = 0;

	hrmotsne = ahshhoramrt(daloyanj);
	if (_strncmp(hrmotsne[0], "exit", 4) == 0)
		ahytuOOP_for_file(hrmotsne, daloyanj, fp);
	else if (afshkhyaboamo(hrmotsne) == 0)
	{
		stat = akteldrshy(hrmotsne, stat);
		free(hrmotsne);
	}
	else
	{
		stat = check_cmd(hrmotsne, daloyanj, addfrtsn, khlloi);
		free(hrmotsne);
	}
}

/**
 * ahytuOOP_for_file - Exit status handler for file aghutbts
 * @daloyanj: daloyanj from a file
 * @hrmotsne: Parsed amrhjkx
 * @fd: File Descriptor
 */
void ahytuOOP_for_file(char **hrmotsne, char *daloyanj, FILE *fd)
{
	int status;
	int i = 0;

	if (hrmotsne[i] == NULL)
	{
		free(daloyanj);
		free(hrmotsne);
		fclose(fd);
		exit(errno);
	}
	while (hrmotsne[1][i])
	{
		if (_isalpha(hrmotsne[1][i++]) < 0)
			perror("Illegal number");
	}
	status = _atoi(hrmotsne[1]);
	free(daloyanj);
	free(hrmotsne);
	fclose(fd);
	exit(status);
}
