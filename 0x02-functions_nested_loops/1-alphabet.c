#include "main.h"

/**
 * print-alphabet - Make the alphabet
 *
 * Return: void
*/

void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

