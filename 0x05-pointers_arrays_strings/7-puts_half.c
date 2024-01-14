#include "main.h"
#include <string.h>
/**
 * puts_half - Functiont that prints the second half of a string.
 * @str: the string to print from.
 * Description: Take the second halfe of a string and print it.
 * if the number of charachters is odd. then print the last n
 * n = (length_of_the_string - 1) / 2
 *
 * Return: Always (0) Success.
*/

void puts_half(char *str)
{
	int i, leng;

	leng = strlen(str);

	if (leng % 2 != 0)
		str[i] = (leng - 1) / 2;
		while (str[i] != '\0' && str[i] > leng / 2)
			_putchar(str[i]);
			str[i++];
}
