#include "main.h"


/**
 * _strleng - function that return lenght of a string
 * @str: given string to check from.
 * Description: if str has anything other then 1 or 0 return NULL.
 *
 * Return: Alwyas (leng) Success.
 */

int _strleng(const char *str)
{
	int leng = 0;

	while (str[leng] != '\0')
		leng++;
	return (leng);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string containing numbers.
 * Description: change str from binary to base10
 *
 * Return: unsigned int if success & NULL if not.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int nstr = _strleng(b);
	int i;

	if (!b)
		return (0);

	for (i = (nstr - 1); i >= 0; i--)
	{
		if (*b != '0' && *b != '1')
			return (0);

		sum = sum * 2 + (*b++ - '0');
	}
	return (sum);
}
