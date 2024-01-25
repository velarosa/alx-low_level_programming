#include "main.h"
#include <stdio.h>

/**
 * _puts - Function that prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 * Description: Something similiar to puts.
 *
 * Return: Always (void) Success.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
