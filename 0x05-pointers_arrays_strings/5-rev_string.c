#include "main.h"
#include <string.h>
/**
 * rev_string - Function that prints a string reversed.
 * @s: The string to be printed.
 * Description: Finde the last string in aray ans swap it with
 * the first till half of of array.
 *
 * Return: Always (void) Success.
*/

void rev_string(char *s)
{
	int i, leng, half;
	char temp;

	leng = strlen(s);
	half = leng / 2;

	for (i = 0; i < half; i++)
	{
		temp = s[i];
		s[i] = s[leng - i - 1];
		s[leng - i - 1] = temp;
	}
}
