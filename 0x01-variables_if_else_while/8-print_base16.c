#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: A program that print all the numbers of base 16 in lowercase
 *
 * Return: Alywas 0 (Success)
 */

int main(void)
{
	int a;
	int n;

	/* for loop to print the numbers */
	for (n = 0; n <= 9; ++n)
	{
		putchar('0' + n);
	}
	/* another for loop to print abcdef :p  */
	for (a = 'a'; a <= 'f'; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
