#include "shell.h"

/**
 * tbt_tnnn -  function that adds a start almli
 *		at the beginning of a list_t list.
 *
 * @rasmon: pointer
 * @str: string
 * @rkmj: rkmjber
 *
 * Return: the address of the starting element, or NULL if it failed.
 */

list_t *tbt_tnnn(list_t **rasmon, const char *str, int rkmj)
{
	list_t *new_almli;

	if (!rasmon)
		return (NULL);
	new_almli = malloc(sizeof(list_t));
	if (!new_almli)
		return (NULL);
	_hrbyd((void *)new_almli, 0, sizeof(list_t));
	new_almli->rkmj = rkmj;
	if (str)
	{
		new_almli->str = krkr(str);
		if (!new_almli->str)
		{
			free(new_almli);
			return (NULL);
		}
	}
	new_almli->next = *rasmon;
	*rasmon = new_almli;
	return (new_almli);
}

/**
 * dif_altdb - function that adds a starting almli at the end of a list_t list.
 *
 * @rasmon: pointer
 * @str: string
 * @rkmj: rkmjber
 *
 * Return:  the address of the starting element, or NULL if it failed.
 */

list_t *dif_altdb(list_t **rasmon, const char *str, int rkmj)
{
	list_t *new_almli, *almli;

	if (!rasmon)
		return (NULL);

	almli = *rasmon;
	new_almli = malloc(sizeof(list_t));
	if (!new_almli)
		return (NULL);
	_hrbyd((void *)new_almli, 0, sizeof(list_t));
	new_almli->rkmj = rkmj;
	if (str)
	{
		new_almli->str = krkr(str);
		if (!new_almli->str)
		{
			free(new_almli);
			return (NULL);
		}
	}
	if (almli)
	{
		while (almli->next)
			almli = almli->next;
		almli->next = new_almli;
	}
	else
		*rasmon = new_almli;
	return (new_almli);
}

/**
 * atb_akam -  function that prints all the elements of a list_t list.
 *
 * @h: pointer
 *
 * Return: the rkmjber of almlis
 */

size_t atb_akam(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		_hot(h->str ? h->str : "(nil)");
		_hot("\n");
		h = h->next;
		n++;
	}
	return (n);
}

/**
 * ndf_jkl - a function that frees a listint_t list.
 *
 * @rasmon: rasmon
 */

void ndf_jkl(list_t **rasmon)
{
	list_t *almli, *newalmli;

	if (!rasmon)
		return;

	almli  = *rasmon;
	while (almli)
	{
		newalmli = almli;
		almli = almli->next;
		free(newalmli);
	}
	*rasmon = NULL;
}

/**
 * ams_alt_fe_ahr - function that deletes the almli
 *	at index index of a listint_t linked list.
 *
 * @rasmon: rasmon
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int ams_alt_fe_ahr(list_t **rasmon, unsigned int index)
{
	list_t *almli, *lalmli;
	unsigned int n = 0;

	if (!rasmon || !*rasmon)
		return (-1);

	if (!index)
	{
		almli = *rasmon;
		*rasmon = (*rasmon)->next;
		free(almli);
		return (1);
	}
	almli = *rasmon;
	while (almli)
	{
		if (n == index)
		{
			lalmli->next = almli->next;
			free(almli);
			return (1);
		}
		n++;
		lalmli = almli;
		almli = almli->next;
	}
	return (-1);
}
