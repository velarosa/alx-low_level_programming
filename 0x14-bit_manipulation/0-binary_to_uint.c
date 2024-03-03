#include "main.h"

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

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		sum = sum * 2 + (*b++ - '0');
	}
	return (sum);
}
