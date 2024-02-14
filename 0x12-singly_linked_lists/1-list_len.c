#include "lists.h"

/**
 * list_len - a function that returns the number of elements.
 * @h: first node.
 * Description: find how many elements.
 *
 * Return: Always (count) Success.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
