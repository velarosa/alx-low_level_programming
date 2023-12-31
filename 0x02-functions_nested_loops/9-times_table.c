#include "main.h"

/**
 * times_table - function that prints 9 times 9 table starting from o.
 * Description: Prints numbers seperated by comma and space.
 *
 * Return: Always (void) Success.
*/

void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > 0)
				putchar(',');
				putchar(' ');
			k = i * j;
			if (k <= 9)
				putchar(' ');
			else
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
		}
		putchar('\n');
	}
