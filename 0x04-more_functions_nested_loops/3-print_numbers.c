#include "main.h"

/**
 * print_numbers - function that prints numbers
 *
 * Description: prints numbers from 0 to 1001 in basse 10.
 *
 * Return: void.
*/

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
