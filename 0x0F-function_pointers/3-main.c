#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entery point
 * @argc: argument count.
 * @argv: argument vector.
 * Description: program that performs simple operations.
 *
 * Return: Alwyas (0) Success.
 */

int main(int argc, char **argv)
{
	int (*my_func)(int, int);
	int a, b;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	my_func = get_op_func(argv[2]);
	if (!my_func)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == "%"))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", my_func(a, b));
	return (0);
}
