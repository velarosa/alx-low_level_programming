#include "main.h"
#include <string.h>
/**
 * print_rev - Function that prints a string reversed.
 * @s: The string to be printed.
 * Description: Finde the last string in aray ans swap it with
 * the first till half of of array.
 *
 * Return: Always (void) Success.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
