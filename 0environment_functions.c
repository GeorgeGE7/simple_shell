#include "shell.h"

/**
 * hat_bysdg - function that returns the array of byhzxe
 *
 * @sal: Structure.
 *
 * Return: Always 0
 */
char **hat_bysdg(info_t *sal)
{
	if (!sal->byhzxe || sal->env_changed)
	{
		sal->byhzxe = wdi_wklm(sal->env);
		sal->env_changed = 0;
	}

	return (sal->byhzxe);
}

/**
 * _zbtasby - function that Initializes a starting byhzxe.
 *
 * @sal: Structure.
 *
 * @mjkyro: the string env
 * @kaimhj: the string env
 *
 *  Return: Always 0
 */
int _zbtasby(info_t *sal, char *mjkyro, char *kaimhj)
{
	char *buf = NULL;
	list_t *temp;
	char *ptr;

	if (!mjkyro || !kaimhj)
		return (0);

	buf = malloc(klmtol(mjkyro) + klmtol(kaimhj) + 2);
	if (!buf)
		return (1);
	ansak(buf, mjkyro);
	alskklm(buf, "=");
	alskklm(buf, kaimhj);
	temp = sal->env;

	while (temp)
	{
		ptr = bybda(temp->str, mjkyro);
		if (ptr && *ptr == '=')
		{
			free(temp->str);
			temp->str = buf;
			sal->env_changed = 1;
			return (0);
		}
		temp = temp->next;
	}
	dif_altdb(&(sal->env), buf, 0);
	free(buf);
	sal->env_changed = 1;
	return (0);
}


/**
 * _dahash - function that Remove an byhzxement.
 *
 * @sal: Structure
 * @mjkyro: the string
 *
 *  Return: 1 on delete, 0 on set
 */
int _dahash(info_t *sal, char *mjkyro)
{
	list_t *temp = sal->env;
	size_t n = 0;
	char *ptr;

	if (!temp || !mjkyro)
		return (0);

	while (temp)
	{
		ptr = bybda(temp->str, mjkyro);
		if (ptr && *ptr == '=')
		{
			sal->env_changed = ams_alt_fe_ahr(&(sal->env), n);
			n = 0;
			temp = sal->env;
			continue;
		}
		temp = temp->next;
		n++;
	}
	return (sal->env_changed);
}
