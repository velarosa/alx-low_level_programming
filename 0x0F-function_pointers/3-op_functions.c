#include "3-calc.h"

/**
 * op_add - Function that calculates the sum of two integers.
 * @a: first integer.
 * @b: second integer.
 * Description: calculate sum of a + b.
 *
 * Return: Alwyas (sum) Success.
 */
int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - Function that calculates the diffrence of two integers.
 * @a: first integer.
 * @b: second integer.
 * Description: calculate difrence between a and b.
 *
 * Return: Alwyas (difference) Success.
 */
int op_sub(int a, int b)
{
	int difference = 0;

	if (a > b)
		difference = a - b;
	else
		difference = b - a;
	return (difference);
}

/**
 * op_mul - Function that Multiplys two integers.
 * @a: first integer.
 * @b: second integer.
 * Description: calculate a * b.
 *
 * Return: Alwyas (product) Success.
 */
int op_mul(int a, int b)
{
	int product = 0;

	product = a * b;
	return (product);
}

/**
 * op_div - Function the divide.
 * @a: first integer.
 * @b: second integer.
 * Description: calculate division.
 *
 * Return: Alwyas (result) Success.
 */
int op_div(int a, int b)
{
	int result = 0;

	result = a / b;
	if (b == 0)

	return (result);
}

/**
 * op_mod - Function that calculates the remainder of two integers.
 * @a: first integer.
 * @b: second integer.
 * Description: calculate a % b.
 *
 * Return: Alwyas (remainder) Success.
 */
int op_mod(int a, int b)
{
	int remainder = 0;

	remainder = a % b;
	if (b == 0)

	return (remainder);
}
