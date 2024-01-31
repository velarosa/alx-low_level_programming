#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of aray.
 * Description: simple malloc function.
 *
 * Return: pointer to alocated memory and 98 if failuer.
 */

void *malloc_checked(unsigned int b)
{
	int *ma;

	ma = malloc(b);

	if (ma == 0)
		exit(98);
	return (ma);
}
