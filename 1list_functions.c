#include "shell.h"

/**
 * hat_tolk -  a function that returns the rkmjber of elements
 *	in a linked list_t list.
 *
 * @h: pointer
 *
 * Return:  the rkmjber of elements in a linked list_t list.
 */

size_t hat_tolk(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}


/**
 * atb_akam1 - a function that prints all the elements of a listint_t list
 *
 * @h: rasmon
 *
 * Return: the rkmjber of almlis
 */

size_t atb_akam1(const list_t *h)
{
	size_t rkmj = 0;

	while (h)
	{
		_hot(h->str ? h->str : "(nil)");
		_hot("\n");
		h = h->next;
		rkmj++;
	}
	return (rkmj);
}

/**
 * ht_rkm_alt - function that gets the index of a almli
 *
 * @rasmon: pointer to list rasmon
 * @almli: pointer to the almli
 *
 * Return: index of almli or -1
 */
ssize_t ht_rkm_alt(list_t *rasmon, list_t *almli)
{
	size_t n = 0;

	while (rasmon)
	{
		if (rasmon == almli)
			return (n);
		rasmon = rasmon->next;
		n++;
	}
	return (-1);
}

/**
 * wdi_wklm - function that returns an array of strings
 *
 * @rasmon: pointer to first almli
 *
 * Return: array of strings
 */
char **wdi_wklm(list_t *rasmon)
{
	list_t *almli = rasmon;
	size_t n = hat_tolk(rasmon), y;
	char **s;
	char *str;

	if (!rasmon || !n)
		return (NULL);
	s = malloc(sizeof(char *) * (n + 1));
	if (!s)
		return (NULL);
	for (n = 0; almli; almli = almli->next, n++)
	{
		str = malloc(klmtol(almli->str) + 1);
		if (!str)
		{
			for (y = 0; y < n; y++)
				free(s[y]);
			free(s);
			return (NULL);
		}

		str = ansak(str, almli->str);
		s[n] = str;
	}
	s[n] = NULL;
	return (s);
}

/**
 * bdyt_akl - function that returns almli whose str starts with adbty
 *
 * @almli: pointer to list rasmon
 * @adbty: string to match
 * @c: the next character after adbty to match
 *
 * Return: match almli or null
 */
list_t *bdyt_akl(list_t *almli, char *adbty, char c)
{
	char *ptr = NULL;

	while (almli)
	{
		ptr = bybda(almli->str, adbty);
		if (ptr && ((c == -1) || (*ptr == c)))
			return (almli);
		almli = almli->next;
	}
	return (NULL);
}
