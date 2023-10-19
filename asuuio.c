#include "header.h"

/**
 * ahshhoramrt - Parses the amrhjkx recieved from stdin
 * @aghutbts: String gathered from stdin
 * Return: Parsed strings to be used as arguments
 */
char **ahshhoramrt(char *aghutbts)
{
	char **arguments;
	char *argument;
	int i;
	int buffsize = BUFSIZE;

	if (aghutbts[0] == ' ' && aghutbts[_strlen(aghutbts)] == ' ')
		exit(0);
	if (aghutbts == NULL)
		return (NULL);
	arguments = malloc(sizeof(char *) * buffsize);
	if (!arguments)
	{
		free(arguments);
		perror("hsh");
		return (NULL);
	}
	argument = _strtok(aghutbts, "\n\t\r\a ");
	for (i = 0; argument; i++)
	{
		arguments[i] = argument;
		argument = _strtok(NULL, "\n\t\r\a ");
	}
	arguments[i] = NULL;

	return (arguments);
}
