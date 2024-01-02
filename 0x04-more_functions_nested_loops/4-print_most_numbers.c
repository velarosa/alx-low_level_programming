#include "main.h"

/**
 * print_most_numbers - function that print numbers.
 *
 * Description: print numbers from 0 to 9 without 2\4.
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + 48);
			i++;
	}
	_putchar('\n');
}
