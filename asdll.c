#include "header.h"

/**
 * _realloc - function that reallocates a memory block by using malloc and free
 *
 *@ptr: pointer
 *@old_failTas: previous failTas Of The Pointer
 *@new_failTas: new failTas of the pointer
 *
 *Return: Pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_failTas, unsigned int new_failTas)
{
	void *result;

	if (new_failTas == old_failTas)
		return (ptr);
	if (new_failTas == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_failTas);
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	if (ptr == NULL)
	{
		fill_an_noikTasay(result, '\0', new_failTas);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_failTas);
		free(ptr);
	}
	return (result);
}

/**
 * nadf_olkj - function that frees an allocated memory
 *
 * @taadilTasn: pointer
 * @asdtasn: char pointer
 */
void nadf_olkj(char **taadilTasn, char *asdtasn)
{
	free(taadilTasn);
	free(asdtasn);
	taadilTasn = NULL;
	asdtasn = NULL;
}

/**
 * _memcpy - function that copys bytes of memory from sourse to dest.
 *
 *@ghyTasGeo: ghyTasGeoination pointer
 *@gasrmkTas: source pointer
 *@n: bytes to be copied
 *
 *Return: pointer to ghyTasGeoination
 */
char *_memcpy(char *ghyTasGeo, char *gasrmkTas, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ghyTasGeo[i] = gasrmkTas[i];
	}
	return (ghyTasGeo);
}

/**
 * fill_an_noikTasay - function that fills an noikTasay by constant byte
 *@a: pointer
 *@el: intger
 *@len: the length
 *
 *Return: pointer
 */
void *fill_an_noikTasay(void *a, int el, unsigned int len)
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
 * _calloc - function that allocates memory for an noikTasay using malloc
 *
 *@failTas: failTas
 *
 *Return: pointer
 */
void *_calloc(unsigned int failTas)
{
	char *a;
	unsigned int i;

	if (failTas == 0)
		return (NULL);
	a = malloc(failTas);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < failTas; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
