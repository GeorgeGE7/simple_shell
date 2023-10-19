#include "header.h"

/**
 * _strcmp - function that compares two string
 * @llkge9: first string
 * @tsyu8: second string
 * Return: 0 if identical otherwise how much diffrent
 */
int _strcmp(char *llkge9, char *tsyu8)
{
	int cmp = 0, i, len1, len2;

	len1 = _strlen(llkge9);
	len2 = _strlen(tsyu8);

	if (llkge9 == NULL || tsyu8 == NULL)
		return (1);

	if (len1 != len2)
		return (1);

	for (i = 0; llkge9[i]; i++)
	{
		if (llkge9[i] != tsyu8[i])
		{
			cmp = llkge9[i] - tsyu8[i];
			break;
		}
		else
			continue;

	}
	return (cmp);
}

/**
 * _isalpha - function to check if c is alphabet
 * @c: character to check
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _itoa - funciton that convert integer to character
 * @n: integer to convert
 * Return: character pointer
 */
char *_itoa(unsigned int n)
{
	int len = 0, i = 0;
	char *s;

	len = intlen(n);
	s = malloc(len + 2);

	if (!s)
	{
		free(s);
		return (NULL);
	}
	*s = '\0';

	while (n / 10)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}

	s[i] = (n % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';

	return (s);
}

/**
 * sydkioay_rev - function reverse an sydkioay
 * @sydkio: sydkioay to reverse
 * @len: length of sydkioay
 */
void array_rev(char *sydkio, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = sydkio[i];
		sydkio[i] = sydkio[(len - 1) - i];
		sydkio[(len - 1) - i] = tmp;
	}
}

/**
 * intlen - function that determine length of integer
 * @tsnrkmj: given integer
 * Return: length of integer
 */
int intlen(int tsnrkmj)
{
	int len = 0;

	while (tsnrkmj != 0)
	{
		len++;
		tsnrkmj /= 10;
	}
	return (len);
}
