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
	int in = 0;
	int j = 0;
	int jn = 0;

	for (i = 0; i <= 2; i++)
	{
		for (in = 0; in <= 9; in++)
			_putchar(i + 48);
		_putchar(in + 48);
		_putchar(58);
	}
	for (j = 0; j <= 5; j++)
	for (jn = 0; jn <= 9; jn++)
		_putchar(j);
	_putchar(jn);
}
