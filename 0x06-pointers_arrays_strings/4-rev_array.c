#include "main.h"

/**
 * reverse_array - Function that reverses the content of an aray of integers.
 * @a: char string.
 * @n: number of elements in an aray.
 * Description: Print a string in reverse.
 *
 * Return: Always (void) Sucess.
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i > j; i++, j--)
		t = a[i];
	a[i] = a[j];
	a[j] = t;
}
