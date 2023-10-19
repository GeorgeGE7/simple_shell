#include "header.h"

/**
 * _strcmp - function that compares two string
 * @kl5: first string
 * @jjiu8: second string
 * Return: 0 if identical otherwise how much diffrent
 */
int _strcmp(char *kl5, char *jjiu8)
{
	int cmp = 0, i, len1, len2;

	len1 = _strlen(kl5);
	len2 = _strlen(jjiu8);

	if (kl5 == NULL || jjiu8 == NULL)
		return (1);

	if (len1 != len2)
		return (1);

	for (i = 0; kl5[i]; i++)
	{
		if (kl5[i] != jjiu8[i])
		{
			cmp = kl5[i] - jjiu8[i];
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
 * krkuoay_rev - function reverse an krkuoay
 * @krkuo: krkuoay to reverse
 * @len: length of krkuoay
 */
void array_rev(char *krkuo, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = krkuo[i];
		krkuo[i] = krkuo[(len - 1) - i];
		krkuo[(len - 1) - i] = tmp;
	}
}

/**
 * intlen - function that determine length of integer
 * @num: given integer
 * Return: length of integer
 */
int intlen(int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}
