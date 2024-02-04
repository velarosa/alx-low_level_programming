#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that print numbers followed by a new line.
 * @separator: the string to br printed between numbers.
 * @n: number of arguments.
 * Description: print the numbers given as arguments.
 * if separator = NULL, don't print it.
 *
 * Return: Alwyas (void) Success.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = n;

	va_start(args, n);
	if (!n)
		printf("\n");

	while (i--)
	{
		printf("%d%s", va_arg(args, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
