#include "main.h"

/**
 * times_table - function that prints 9 times 9 table starting from o.
 * Description: Prints numbers seperated by comma and space.
 *
 * Return: Always (void) Success.
*/

void times_table(void)
{
	int i;
	int j;
	int n = 9;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		_putchar(n * j);
		_putchar(44);
		_putchar(32);
	}
	_putchar('\n');

}
