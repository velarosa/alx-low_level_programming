#include "main.h"
#include <stdio.h>

/**
 * main - entery point
 * @argc: argument count.
 * @argv: argument vector.
 * Description: print the number of arguments passed to the program.
 *
 * Return: Always (0) Success.
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
