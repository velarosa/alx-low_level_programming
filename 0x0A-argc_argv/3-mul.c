#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entery point.
 * @argc: argument count.
 * @argv: argument vector.
 * Description: Multiply two numbers from argv.
 *
 * Return: 0 if Success And 1 if Failluer.
 */

int main(int argc, char **argv)
{
	int result;

	if ( argc == 3)
	{
		result = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", result);
	return (0);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
