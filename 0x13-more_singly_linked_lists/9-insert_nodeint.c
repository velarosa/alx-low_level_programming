#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: the first node.
 * @idx: the index of the list where the new node should be added.
 * @n: the given new node.
 * Description: find nth node and make ptr->n = n in it.
 *
 * Return: Alywas (temp) Success.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp = malloc(sizeof(listint_t));
	unsigned int count;

	if (!head || !temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (!idx)
	{
		temp->next = *head;
		*head = temp;
	}
	for (count = 0, ptr = *head; (count < idx); ptr = ptr->next, count++)
	{
		temp->next = ptr->next;
		ptr->next = temp;
		return (temp);
	}
	free(temp);
	return (NULL);
}
