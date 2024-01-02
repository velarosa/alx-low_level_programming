#include "main.h"

/**
 * print_line - Function that prints a line with _.
 * @n: number of _ to be printed.
 * Description: Print a line useing _ while line length is n.
 *
 * Return: Always (void) Success.
*/

void print_line(int n)
{
	while (n > 0)
		_putchar('_');
	n--;

}
