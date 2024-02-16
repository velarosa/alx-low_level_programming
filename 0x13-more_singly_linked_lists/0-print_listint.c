#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list.
 * @h: the first node in the list.
 * Description: print every element and int num of elements.
 *
 * Return: num of elements.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
