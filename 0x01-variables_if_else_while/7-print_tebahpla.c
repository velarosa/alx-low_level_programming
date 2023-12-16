#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: Program that prints the alphabet in lower case in revers
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char ralph;

	for (ralph = 'z'; ralph  >= 'a'; --ralph)
	{
	putchar(ralph);
	}
	putchar('\n');

	return (0);
}
