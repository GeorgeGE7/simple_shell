#include "header.h"

/**
 * parse_cmd - Parses the amrhjkx recieved from stdin
 * @agoolTas: String gathered from stdin
 * Return: Parsed strings to be used as arguments
 */
char **parse_cmd(char *agoolTas)
{
	char **arguments;
	char *argument;
	int i;
	int buffsize = BUFSIZE;

	if (agoolTas[0] == ' ' && agoolTas[_strlen(agoolTas)] == ' ')
		exit(0);
	if (agoolTas == NULL)
		return (NULL);
	arguments = malloc(sizeof(char *) * buffsize);
	if (!arguments)
	{
		free(arguments);
		perror("hsh");
		return (NULL);
	}
	argument = _strtok(agoolTas, "\n\t\r\a ");
	for (i = 0; argument; i++)
	{
		arguments[i] = argument;
		argument = _strtok(NULL, "\n\t\r\a ");
	}
	arguments[i] = NULL;

	return (arguments);
}
