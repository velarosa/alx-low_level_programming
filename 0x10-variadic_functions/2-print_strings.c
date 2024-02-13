#include <stdarg.h>
#include <stdio.h>

/**
 *  print_strings - print strings followed by a new line
 * @separator: the string to br printed between numbers.
 * @n: number of arguments.
 * Description: print the numbers given as arguments.
 * if separator = NULL, don't print it.
 *
 * Return: Alwyas (void) Success.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list args;
        int i = n;

        va_start(args, n);
        if (!n)
                printf("\n");

	char *str;
        while (i--)
        {
                printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
        }
        va_end(args);
}
