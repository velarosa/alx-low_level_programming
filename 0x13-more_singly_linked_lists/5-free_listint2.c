#include "lists.h"

/**
 * free_listint2 - a function that frees a list.
 * @head: the first node in the list.
 * Description: frees asecond list.
 *
 * Return Alyaws (void) Success.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *store;

	ptr = *head;
	while (ptr)
	{
		store = ptr->next;
		free(ptr);
		ptr = store;
	}
}
