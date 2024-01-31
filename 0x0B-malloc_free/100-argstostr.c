#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: given string
 * Description: find length of a string
 *
 * Return: Always (size) Success.
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 * Description: similiar to argc argv.
 *
 * Return: NULL if ac == 0 or av == NULL,
 * and pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt;
	char *mystr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc = nc + _strlen(av[i]);

	mystr = malloc(sizeof(char) * nc + 1);
	if (mystr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			mystr[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
	return (mystr);
}
