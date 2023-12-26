#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: program to print _putchar with putchar
 *
 * Return: Alwyas 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		putchar(str[ch]);
	}
	putchar('\n');
	return (0);
}
