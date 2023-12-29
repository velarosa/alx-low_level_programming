#include "main.h"

/**
 * print_sign - a function that prints the value of a number.
 * @n: the number that the function checkes if positiv\negativ\zero.
 * Description: a function that print +\0\- depending on the number.
 *
 * Return: (1) if positive, (0) if zero and (-1) if negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
