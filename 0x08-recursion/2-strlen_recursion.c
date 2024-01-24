#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: char string.
 * Descripton: returns the length of a string through recursion.
 *
 * Return: Always (nb) Success.
 */

int _strlen_recursion(char *s)
{
	int nb = 0;

	if (*s == '\0')
	{
		return (nb);
	}
	nb = nb + _strlen_recursion(s + 1) + 1;
		return (nb);
}
