#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Description: xor n and m, the result of it find all 1 bit
 * with & and return it.
 *
 * Return: Alays (count) Success.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
		count++;
		mask = mask & (mask - 1);
	}
	return (count);
}
