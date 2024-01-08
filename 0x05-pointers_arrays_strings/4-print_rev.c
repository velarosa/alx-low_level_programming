#include "main.h"

/**
 * print_rev - Function that prints a string reversed.
 * @s: The string to be printed.
 * Description: Finde the last string in an aray ans print it then the one
 * before it and print it and so on.
 *
 * Return: Always (void) Success.
*/

void print_rev(char *s)
{
	int i = 0;

	while (i == sizeof(s) / sizeof(s[0]) - 1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
