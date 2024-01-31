#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with char.
 * @s: memory to be filled.
 * @b: the char to fill with.
 * @n: maximum number of char to fill.
 * Description: fill an aray(s) with char(c) given max char(n)
 *
 * Return: Always (s) Success.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}


/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: elements.
 * @size: size for memory allocation.
 * Description:making calloc with malloc in a fun:)ction.
 *
 * Return: Pointer to allocated memory.
 * if nmemb or size = 0 then NULL.
 * if failuer then NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mc;

		if (nmemb == 0 || size == 0)
			return (NULL);

	mc = malloc(sizeof(int) * nmemb);
	if (mc == NULL)
		return (NULL);

	_memset(mc, 0, sizeof(int) * nmemb);

	return (mc);

}
