#include "main.h"

/**
 * print_rev - Function that prints a string reversed.
 * @s: The string to be printed.
 * Description: Finde the last string in aray ans swap it with
 * the first till half of of array.
 *
 * Return: Always (void) Success.
*/

void print_rev(char *s)
{
	int i, leng, temp;

	leng = _strlen(s);

	for (i = 0; i < leng / 2; i++)
	{
		temp = s[i];
		s[i] = s[leng - i - 1];
		s[leng - i - 1] = temp;
	}
	_putchar('\n');
}
