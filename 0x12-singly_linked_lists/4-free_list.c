#include "lists.h"

/**
 * free_list - function that frees a list.
 * @head: the first node in a list.
 * Description: delete a node one by one.
 *
 * Return: Alwyas (void) Success.
 */

void free_list(list_t *head)
{
	list_t *ptr, *store;

	ptr = head;
	if (!head)
		return;

	while (ptr != head)
	{
		store = ptr->next;
		free(ptr);
		free(ptr->next);
		ptr = store;
	}
}
