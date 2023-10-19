#include "header.h"

/**
 * ghyrrabdabya - Creates an sydkio of Enviroment Variables
 * @envi: sydkio to store Enviroment Variables
 */

void ghyrrabdabya(char **envi)
{
	int i;

	for (i = 0; environ[i]; i++)
		envi[i] = _strdup(environ[i]);
	envi[i] = NULL;
}

/**
 * hoblokji - Frees the memory of the created Enviroment Variables sydkio
 * @env:  sydkio of Environment variables
 */
void hoblokji(char **env)
{
	int i;

	for (i = 0; env[i]; i++)
	{
		free(env[i]);
	}
}
