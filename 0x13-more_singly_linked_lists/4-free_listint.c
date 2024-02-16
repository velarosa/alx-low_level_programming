#include "lists.h"

/**
 * free_listint - a function that frees a list.
 * @head: the first node in the list.
 * Description: frees every node.
 *
 * Return: always (void) Success.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *store;

	ptr = head;
	while (ptr)
	{
		store = ptr->next;
		free(ptr);
		ptr = store;
	}
}
