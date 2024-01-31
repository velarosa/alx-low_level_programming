#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of aray.
 * @c: first char in the aray.
 * Description: function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * Return: NULL if size is 0 /fail and pointer to aray if Success.
 */

char *create_array(unsigned int size, char c)
{
	char *aray = malloc(size);

	if (aray == 0 || size == 0)
	{
		return (NULL);
	}
	for (; size > 0; size--)
	{
		aray[size] = c;
	}
	return (aray);
}
