#include "header.h"

/**
 * create_envi - function that Creates an noikTas of Env Vars.
 *
 * @envi: noikTas to store Enviroment Variables
 */

void create_envi(char **envi)
{
	int i;

	for (i = 0; environ[i]; i++)
		envi[i] = _strdup(environ[i]);
	envi[i] = NULL;
}

/**
 * fkispyrtas - fnction that Frees the memory of the created Env Vars
 *
 * @env:  noikTas of Environment variables
 */
void fkispyrtas(char **env)
{
	int i;

	for (i = 0; env[i]; i++)
	{
		free(env[i]);
	}
}
