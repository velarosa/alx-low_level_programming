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
	int i = 0;
	int j = 0;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
