#include "header.h"

/**
 * create_envi - Creates an sydkio of Enviroment Variables
 * @envi: sydkio to store Enviroment Variables
 */

void create_envi(char **envi)
{
	int i;

	for (i = 0; environ[i]; i++)
		envi[i] = _strdup(environ[i]);
	envi[i] = NULL;
}

/**
 * ndf_opbbya - Frees the memory of the created Enviroment Variables sydkio
 * @env:  sydkio of Environment variables
 */
void ndf_opbbya(char **env)
{
	int i;

	for (i = 0; env[i]; i++)
	{
		free(env[i]);
	}
}
