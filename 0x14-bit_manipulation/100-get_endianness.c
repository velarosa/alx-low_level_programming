#include "main.h"

/**
 * get_endianness - function that checkes the endieness
 * Description: check the first memory place storage
 *
 * Return: 1 if littel Endian and 0 if Big endian
 */

int get_endianness(void)
{
	unsigned long int n = 1;
	char *ptr = (char *) &n;

	if (*ptr)
		return (1);
	return (0);
}
