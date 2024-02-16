#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list.
 * @h: the first element in a list.
 * Description: return the length of a list.
 *
 * Return: Alwyas (i) Success.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
