#include "main.h"

/**
 * jack_bauer - function that print every minute of the day.
 * Description: Prints 00:00 to 23:59.
 *
 * Return: Always (void) Success.
*/

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
			_putchar(i + 48);
		_putchar(j + 48);
		_putchar('\n');
	}
