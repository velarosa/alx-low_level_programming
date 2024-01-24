#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to the power
 * of y.
 * @x: integer value to be raised.
 * @y: integer value of the power.
 * Description: If y is less then 0 the function should return -1.
 *
 * Return: z if y > 0 And -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	if  (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
	else
		return (-1);
}
