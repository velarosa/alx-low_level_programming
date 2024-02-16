#include "lists.h"

/**
 * pop_listint - a function that deletes the head node.
 * @head: the first element in the list.
 * Descriptio: delete the head & head->next is the new head
 * & head->n in n
 *
 * Return: always (n) Success.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
