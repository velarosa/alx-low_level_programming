#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to calculate.
 * Description: if n dosen't have a natural square root.
 * the function returns -1.
 *
 * Return: If Success n, else -1.
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}



/**
 * square - root function.
 * @n: number to calculate.
 * @ro: int number.
 * Description: find if a number is the root or not.
 *
 * Return: ro if success and -1 if not
 */
int square(int n, int ro)
{
	if ((ro * ro) == n)
	{
		return (ro);
	}
	else if ((ro * ro) < n)
	{
		return (square(n, ro + 1));
	}
	else
	{
		return (-1);
	}
}
