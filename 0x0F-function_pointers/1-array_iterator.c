#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: the array.
 * @size: size of the array.
 * @action: function poiner to the function need to use.
 *Descriptio: do something to an array with function pointer.
 *
 * Return: Alyaws (void) Success.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && action && size)
	{
		while (array <= e)
			action(*array++);
	}
}
