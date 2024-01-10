#include "main.h"

/**
 * puts2 - Function that Prints every other charahter in a string starting with the first
 * one.
 * @str: the string to print from
 * Description: write a charachter and skip a charachhter.
 *
 * Return: Always (void) Success.
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');

}
