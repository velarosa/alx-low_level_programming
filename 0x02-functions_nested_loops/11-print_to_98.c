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
	if (n > 98 && n != 98)
	{
		n--;
		printf("%d, ", n);
	}

	else if (n < 0 && n != 98)
	{
		n++;
		printf("%d, ", n);
	}
	else if (n == 98)
	{
		printf("%d, ", n);
	}
}