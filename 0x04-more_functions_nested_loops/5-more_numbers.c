#include "main.h"

/**
 * more_numbers - function that print numbers to 14 in rows and coulmns.
 *
 * Description: print from 0 to 14 in numbers and in rows.
 *
 * Return: (void) Success.
*/

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i < 15)
	{
		while (j < 15)
			_putchar(j + 48);
			j++;
	}
	i++;
	_putchar('\n');
}
