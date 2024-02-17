#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node at given index.
 * @head: first node in the list.
 * @index: number of index to delete.
 * Description: delete nth node:
 *
 * Return: 1 if succeeded & -1 iffailed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	for (count = 0, ptr = *head; (count = index); ptr = ptr->next, count++)
		free(ptr);
	if (!ptr)
		return (1);
	else
		return (-1);
}
