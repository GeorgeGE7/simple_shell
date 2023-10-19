#include "header.h"

/**
 * parse_cmd - Parses the amrhjkx recieved from stdin
 * @dkhkhar: String gathered from stdin
 * Return: Parsed strings to be used as arguments
 */
char **parse_cmd(char *dkhkhar)
{
	char **arguments;
	char *argument;
	int i;
	int buffsize = BUFSIZE;

	if (dkhkhar[0] == ' ' && dkhkhar[_strlen(dkhkhar)] == ' ')
		exit(0);
	if (dkhkhar == NULL)
		return (NULL);
	arguments = malloc(sizeof(char *) * buffsize);
	if (!arguments)
	{
		free(arguments);
		perror("hsh");
		return (NULL);
	}
	argument = _strtok(dkhkhar, "\n\t\r\a ");
	for (i = 0; argument; i++)
	{
		arguments[i] = argument;
		argument = _strtok(NULL, "\n\t\r\a ");
	}
	arguments[i] = NULL;

	return (arguments);
}
