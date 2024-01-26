#include "main.h"
#include <stdio.h>

/**
 * main - entery code.
 * @argc: argument count.
 * @argv: argument vector.
 * Description: A code that prints all the arguments it receives.
 *
 * Return: Always (0) Success.
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
		printf("%s\n", argv[0]);
	return (0);
}
