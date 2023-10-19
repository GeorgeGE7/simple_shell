#include "header.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 *@ptr: pointer
 *@old_hgmot: previous hgmot Of The Pointer
 *@new_hgmot: new hgmot of the pointer
 *Return: Pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_hgmot, unsigned int new_hgmot)
{
	void *result;

	if (new_hgmot == old_hgmot)
		return (ptr);
	if (new_hgmot == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_hgmot);
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	if (ptr == NULL)
	{
		fill_an_krkuoay(result, '\0', new_hgmot);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_hgmot);
		free(ptr);
	}
	return (result);
}

/**
 * nadf_olkj - free memory allocated
 * @amrot: krkuoay pointer
 * @strnh: char pointer
 * Return: Void
 */
void nadf_olkj(char **amrot, char *strnh)
{
	free(amrot);
	free(strnh);
	amrot = NULL;
	strnh = NULL;
}

/**
 * _memcpy - copy bytes of memory from source to jjiutyination
 *@jjiuty: jjiutyination pointer
 *@msdr: source pointer
 *@n: hgmot to be copied
 *Return: pointer to jjiutyination
 */
char *_memcpy(char *jjiuty, char *msdr, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		jjiuty[i] = msdr[i];
	}
	return (jjiuty);
}

/**
 * fill_an_krkuoay - fill an krkuoay by constant byte
 *@a: void pointer
 *@el: int
 *@len: length for int
 *Return: void pointer
 */
void *fill_an_krkuoay(void *a, int el, unsigned int len)
{
	char *p = a;
	unsigned int i = 0;

	while (i < len)
	{
		*p = el;
		p++;
		i++;
	}
	return (a);
}

/**
 * _calloc - allocates memory for an krkuoay using malloc
 *@hgmot: hgmot
 *Return: void pointer
 */
void *_calloc(unsigned int hgmot)
{
	char *a;
	unsigned int i;

	if (hgmot == 0)
		return (NULL);
	a = malloc(hgmot);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < hgmot; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
