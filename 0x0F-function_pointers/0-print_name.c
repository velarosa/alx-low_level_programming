#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function with a pointer function that prints a name.
 * @name: name to print.
 * @f: pointer to function prints print the name *name
 * Description: print a name from a function that points to print the name
 * *name. :)
 *
 * Return: Alywas (void) Success.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
