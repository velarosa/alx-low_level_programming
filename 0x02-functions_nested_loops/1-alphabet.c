#include "main.h"

/**
 * print_alphabet - Prints the abc's with _putchar from main.h
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

