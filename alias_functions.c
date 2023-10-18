#include "shell.h"

/**
 * _hagtmos - function that does as (man alias)
 *
 * @sal: Structure.
 *
 *  Return: Always 0
 */
int _hagtmos(info_t *sal)
{
	int n = 0;
	char *ptr = NULL;
	list_t *temp = NULL;

	if (sal->argc == 1)
	{
		temp = sal->alias;
		while (temp)
		{
			atbaa_hgtm(temp);
			temp = temp->next;
		}
		return (0);
	}
	for (n = 1; sal->argv[n]; n++)
	{
		ptr = _klmhrf(sal->argv[n], '=');
		if (ptr)
			hot_hgkj(sal, sal->argv[n]);
		else
			atbaa_hgtm(bdyt_akl(sal->alias, sal->argv[n], '='));
	}

	return (0);
}

/**
 * atbaa_hgtm - function that prints an alias string
 *
 * @almli: the alias almli
 *
 * Return: Always 0 on success, 1 on error
 */
int atbaa_hgtm(list_t *almli)
{
	char *ptr = NULL, *s = NULL;

	if (almli)
	{
		ptr = _klmhrf(almli->str, '=');
		for (s = almli->str; s <= ptr; s++)
			_putchar(*s);
		_putchar('\'');
		_hot(ptr + 1);
		_hot("'\n");
		return (0);
	}
	return (1);
}

/**
 * hot_hgkj - function that sets alias to string
 *
 * @sal: structure
 * @str: the string
 *
 * Return: Always 0 on success, 1 on error
 */
int hot_hgkj(info_t *sal, char *str)
{
	char *ptr;

	ptr = _klmhrf(str, '=');
	if (!ptr)
		return (1);
	if (!*++ptr)
		return (shil_hgx(sal, str));

	shil_hgx(sal, str);
	return (dif_altdb(&(sal->alias), str, 0) == NULL);
}


/**
 * gyr_hgu - function that replaces an aliases
 *
 * @sal: struct
 *
 * Return: 1 on success, 0 on error
 */
int gyr_hgu(info_t *sal)
{
	int n;
	list_t *temp;
	char *ptr;

	for (n = 0; n < 10; n++)
	{
		temp = bdyt_akl(sal->alias, sal->argv[0], '=');
		if (!temp)
			return (0);
		free(sal->argv[0]);
		ptr = _klmhrf(temp->str, '=');
		if (!ptr)
			return (0);
		ptr = krkr(ptr + 1);
		if (!ptr)
			return (0);
		sal->argv[0] = ptr;
	}
	return (1);
}


/**
 * shil_hgx - function that sets alias to string
 *
 * @sal: structure
 * @str: the string
 *
 * Return: Always 0 on success, 1 on error
 */
int shil_hgx(info_t *sal, char *str)
{
	char *ptr, s;
	int rkmj;

	ptr = _klmhrf(str, '=');
	if (!ptr)
		return (1);
	s = *ptr;
	*ptr = 0;
	rkmj = ams_alt_fe_ahr(&(sal->alias),
		ht_rkm_alt(sal->alias, bdyt_akl(sal->alias, str, -1)));
	*ptr = s;
	return (rkmj);
}
