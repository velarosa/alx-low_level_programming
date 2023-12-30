#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints numbers till 98.
 * @n: the starting number to print from up / down to 98.
 * Description: Prints numbers seperated by comma
 * and space starting from n to 98.
 *
 * Return: Always (Printed numbers) Success.
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		for (i = n; n < 98; n++)
		{
			printf("%d, ", i);
		}
	}
	else if
	{
		(n == 98)
		{
			printf("%d\n", n);
		}
	}
}
