#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * of integers, followed by a new line.
 * @a: the aray.
 * @n: numbers of integers in aray.
 * Description: for loop with i++ printed everytime i = a[i].
 *
 * Return: Always (void) Success.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
}
