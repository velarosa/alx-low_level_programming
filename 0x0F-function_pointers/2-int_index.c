#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: where to search for the integer.
 * @size: the number of elements in the array.
 * @cmp: function pointer to the used compare values.
 * Description: int_index returns the index of the first element
 * for which the cmp function does not return 0
 *
 * Return: if SUccess 0, if no element match or size <= 0 : -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && cmp && size)
		while (n < size)
		{
			if (cmp(array[n]))
				return (n);
			n++;
		}
	return (-1);
}
