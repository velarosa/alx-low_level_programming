#include "main.h"

/**
 * print_last_digit - Function that print the last digit of an intiger.
 * @n: the last integer that ought to be printed.
 * Description: outputs the final digit of givien input integer.
 *
 * Return: Alyways (n) Success.
*/

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
