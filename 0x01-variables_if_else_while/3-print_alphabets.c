#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;
	char aLPH;

	for (alph = 'a'; alph <= 'z'; ++alph)
	{
	putchar(alph);
	}
	for (aLPH = 'A'; aLPH <= 'Z'; ++aLPH)
	{
		putchar(aLPH);
	}
	putchar('\n');
	return (0);
}
