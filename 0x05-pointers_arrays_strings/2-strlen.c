#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer to a string ought to be counted.
 * Description: Returns the length of a string in integer.
 *
 * Return: Always (n) Success.
*/

int _strlen(char *s)
{
	int n = 0;

	for (n = 0; n <= *s; n++)
		printf("%d", n);
	return n;
}
