#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that checks if n is prime number.
 * @n: the integer to check.
 * @or: the int to devide by.
 * Description: check if prim number.
 *
 * Return: 1 if prime 0 if not.
 */
int check_fun(int n, int or);
int is_prime_number(int n)
{
	return (check_fun(n, 2));
}

/**
 * check_fun - can you devide it.
 * @n: the integer to check.
 * @or: the integer to devide by.
 * Description: devide and check.
 *
 * Return: itself.
 */

int check_fun(int n, int or)
{
	if (or >= n && n > 1)
		return (1);
	else if (n % or == 0 || n <= 1)
		return (0);
	else
		return (check_fun(n, or + 1));
}
