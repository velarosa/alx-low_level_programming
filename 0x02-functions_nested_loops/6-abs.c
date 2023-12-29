#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @i: the integer that gets checked.
 * Description: returns the absolute value of givien inreger.
 *
 * Return: Always (0) Success.
*/

int _abs(int i)
{
	if (i > 0)
		_putchar(i);
	else if (i < 0)
	{
		i = (-1) * i;
		_putchar(i);
	}

	else
		_putchar(48);
	return (i);
}
