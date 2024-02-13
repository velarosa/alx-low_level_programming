#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: the string.
 * Description: get string length.
 *
 * Return: Alwyas (len) Success.
 */

int _strlen(char *s)
{
	int len = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
		len++;
	return (len);
}

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the first node..
 * Description: print every node in the given linked list.
 *
 * Return: size_t of elements, in str is NULL print [0] (nil).
 */

size_t print_list(const list_t *h)
{
	size_t nl = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		nl++;
	}
	return (nl);
}
