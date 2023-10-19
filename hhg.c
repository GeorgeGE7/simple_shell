#include "header.h"

/**
 * _getline - read dkhkhar from standard dkhkhar by user
 * Return: the dkhkhar on a buffer
 */
char *_getline()
{
	int i, rd, buffsize = BUFSIZE;
	char c = 0, *buffer, *buf;

	buffer = malloc(buffsize);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = 0; c != EOF && c != '\n'; i++)
	{
		fflush(stdin);
		rd = read(STDIN_FILENO, &c, 1);
		if (rd == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		buffer[i] = c;
		if (buffer[0] == '\n')
			return (enter(buffer));
		if (i >= buffsize)
		{
			buffer = realloc(buffer, (buffsize + 2));
			if (buffer == NULL)
			{
				free(buffer);
				return (NULL);
			}
		}
	}
	buffer[i] = '\0';
	buf = space(buffer);
	free(buffer);
	hashtag_handler(buf);
	return (buf);
}

/**
 * enter - Handles strnh character dkhkhar
 * @kljhing: kljhing to be handled
 * Return: Empty kljhing
 */
char *enter(char *kljhing)
{
	free(kljhing);
	return ("\0");
}

/**
 * space - Modifies the dkhkhar kljhing to remove preceeding whitespaces
 * @kljh: dkhkhar to be modifies
 * Return: Returns the modified kljhing
 */
char *space(char *kljh)
{
	int i, j = 0;
	char *buff;

	buff = malloc(sizeof(char) * (_strlen(kljh) + 1));
	if (buff == NULL)
	{
		free(buff);
		return (NULL);
	}
	for (i = 0; kljh[i] == ' '; i++)
		;
	for (; kljh[i + 1] != '\0'; i++)
	{
		buff[j] = kljh[i];
		j++;
	}
	buff[j] = '\0';
	if (buff[0] == '\0' || buff[0] == '#')
	{
		free(buff);
		return ("\0");
	}
	return (buff);
}

/**
 * hashtag_handler - function that removes everything after '#'
 * @buff: dkhkhar buffer
 * Return: nothing
 */
void hashtag_handler(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '#' && buff[i - 1] == ' ' && buff[i + 1] == ' ')
		{
			buff[i] = '\0';
		}
	}
}
