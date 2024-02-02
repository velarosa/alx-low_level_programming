#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints struct dog.
 * @d: the nes struct dog to be printed.
 * Description: print a struct of struct dog.
 *
 * Return: Always (void) Success.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
	}
}
