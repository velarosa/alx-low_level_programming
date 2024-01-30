#include "main.h"
#include <stdlin.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: number of coulmns
 * @height: number of rows
 * Description: basically make a two dimensional aray.
 *
 * Return: Pointer to a two dimensional aray. NULL on failure.
 * and NULL if width or height <= 0
 */

int **alloc_grid(int width, int height)
{
	int **aray, i, j;

	aray = malloc(sizeof(*aray) * height);

	if (width <= 0 || height <= 0 || aray == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			aray[i] = malloc(sizeof(**aray) * width);
			if (aray[i] == NULL)
			{
				while (i--)
					free(aray[i]);
				free(aray);
			}
			else
				for (j = 0; j < width; j++)
				{
					aray[i][j] = 0;
				}
		}
	}
	return (aray);
}
