#include "main.h"

/**
 * _puts_recursion - function that prints a string.
 * @s: char string
 * Description: function that prints a string, followed by a new line.
 *
 * Return: Always (void) Success.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
