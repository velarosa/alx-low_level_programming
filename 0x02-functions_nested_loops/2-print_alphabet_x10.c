#include "main.h"

/**
 * print_alphabet_x10 - A function to print abc's ten times
*/

void print_alphabet_x10(void);
{

	for (int i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch < 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
