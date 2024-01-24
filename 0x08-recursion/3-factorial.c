#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: the number to calculate.
 * Description: If n is lower then 0, the function should return -1
 * to indicate an error.
 *
 * Return: 0 if n > 0 And -1 if n < 0.
 */

int factorial(int n)
{
	if  (n == 0)
	{
		return (1);
	}
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
