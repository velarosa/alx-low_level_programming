#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an aray of integers.
 * @min: lowest integer.
 * @max: highest integer.
 * Description: creat an aray that contain all the values from min
 * (included) to max (included), ordered from min to max.
 *
 * Return: Pointer to aray.
 * NULL if min > max.
 * NULL if malloc fails.
 */

int *array_range(int min, int max)
{
	int *all;
	int i = 0, m2x;

	if (min > max)
		return (NULL);

	m2x = max - min + 1

	all = malloc(sizeof(int) * m2x);

	if (all == 0)
		return (NULL);

	for (; i < m2x; i++)
		all[i] = min++;
	return (all);
}
