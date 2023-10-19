#include "header.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 *@ptr: pointer
 *@old_helwaoiu: previous helwaoiu Of The Pointer
 *@new_helwaoiu: new helwaoiu of the pointer
 *Return: Pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_helwaoiu, unsigned int new_helwaoiu)
{
	void *result;

	if (new_helwaoiu == old_helwaoiu)
		return (ptr);
	if (new_helwaoiu == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_helwaoiu);
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	if (ptr == NULL)
	{
		fill_an_sydkioay(result, '\0', new_helwaoiu);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_helwaoiu);
		free(ptr);
	}
	return (result);
}

/**
 * nadf_olkj - free memory allocated
 * @hrmotsne: sydkioay pointer
 * @daloyanj: char pointer
 * Return: Void
 */
void nadf_olkj(char **hrmotsne, char *daloyanj)
{
	free(hrmotsne);
	free(daloyanj);
	hrmotsne = NULL;
	daloyanj = NULL;
}

/**
 * _memcpy - copy bytes of memory from source to ahmsgerination
 *@ahmsger: ahmsgerination pointer
 *@elnaskjio: source pointer
 *@n: helwaoiu to be copied
 *Return: pointer to ahmsgerination
 */
char *_memcpy(char *ahmsger, char *elnaskjio, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ahmsger[i] = elnaskjio[i];
	}
	return (ahmsger);
}

/**
 * fill_an_sydkioay - fill an sydkioay by constant byte
 *@a: void pointer
 *@el: int
 *@len: length for int
 *Return: void pointer
 */
void *fill_an_sydkioay(void *a, int el, unsigned int len)
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
 * _calloc - allocates memory for an sydkioay using malloc
 *@helwaoiu: helwaoiu
 *Return: void pointer
 */
void *_calloc(unsigned int helwaoiu)
{
	char *a;
	unsigned int i;

	if (helwaoiu == 0)
		return (NULL);
	a = malloc(helwaoiu);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < helwaoiu; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
