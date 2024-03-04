#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the given integer.
 * Description: see if last binary of n is & with 1 print 1 else print 0
 *
 * Return: Always (void) Success.
 */

void print_binary(unsigned long int n)
{
	int x = sizeof(n) * 8, y = 0;

	while (x)
	{
		if (n & 1L << --x)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');

}
