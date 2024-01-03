#include "main.h"

/**
 * reset_to_98 - function that changes the value of n.
 * @n: the integer that gets changed with a pointer
 * Description: change the value of n with a pointer to 98.
 *
 * Returns: Always (void) Success.
*/

void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
