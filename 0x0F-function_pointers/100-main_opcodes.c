#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entery point.
 * @argc: arguments number.
 * @argv: arguments vector.
 *
 * Return: Always (0) Success.
 */

int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (b--)
		printf("%02hhx%s", *ptr++, b ? " " : "\n");
	return (0);
}
