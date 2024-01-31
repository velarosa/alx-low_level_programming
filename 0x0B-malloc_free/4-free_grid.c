#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: grid of memory.
 * @height: int for rows.
 *
 * Return: Always (void) Success.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(greed[i]);
	free(greef);
}
