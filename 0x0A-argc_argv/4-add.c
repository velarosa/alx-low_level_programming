#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entery point.
 * @argc: argument count.
 * @argv: argument vector.
 * Description: Adds positive numbers, Prints the result followed
 * by a new line.
 * If no number is passed to the program, print 0, followed by a new line.
 * If one of the number contains symbols that are not digits.
 * print Error, followed by a new line, and return 1
 *
 * Return: 0 if Success And 1 if Failluer.
 */

int main(int argc, char **argv)
{
	int result;
	char *c;

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				return (printf("Error\n"), 1);
			}
			result += (atoi(argv[argc]));
		}
		printf("%d\n", result);
		return (0);
	}
	 if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		return (printf("Error\n"), 1);
	}
}
