#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all it's parameters.
 * @n: number of arguments.
 * Description: find the summ of ...
 *
 * Return: if n == 0 return 0, else return sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i--)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
