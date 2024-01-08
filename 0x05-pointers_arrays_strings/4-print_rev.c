#include "main.h"

/**
 * print_rev - Function that prints a string reversed.
 * @s: The string to be printed.
 * Description: Something similiar to puts. But reversed.
 *
 * Return: Always (void) Success.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] == '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
