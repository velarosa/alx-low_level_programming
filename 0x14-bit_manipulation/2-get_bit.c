#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: value of bit
 * @index: index starting from 0 of bit you want to get.
 * Description: return 1 or 0 were the index points to.
 *
 * Return: Always (bit) Success.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;
	int masked_n = n & mask;
	int bit = masked_n >> index;

	return (bit);
}
