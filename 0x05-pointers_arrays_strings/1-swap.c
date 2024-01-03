#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Description: Use a pointers to swap the values.
 *
 * Return: Always (void) Success.
*/

void swap_int(int *a, int *b)
{
	int **pa;
	int **pb;

	pa = &a;
	pb = &b;

	**pa = *b;
	**pb = *a;
}
