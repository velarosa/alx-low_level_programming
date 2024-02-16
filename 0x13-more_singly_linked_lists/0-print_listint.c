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


	if (!h)
	{
		printf("-> %ld elements", i);
		return (i);
	}
	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
