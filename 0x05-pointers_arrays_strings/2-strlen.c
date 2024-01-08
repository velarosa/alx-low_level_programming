#include "main.h"

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

	while (s[n] != '\0')
		n++;
	return (n);
}
