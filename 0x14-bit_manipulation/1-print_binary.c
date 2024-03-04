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
	int bit = sizeof(n) * 8;

	while (bit)
	{
		if (n & 1L << --bit)
			_putchar('1');

		else _putchar('0');
	}
}
