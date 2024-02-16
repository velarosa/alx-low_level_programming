#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of a list.
 * @head: the first element in the list.
 * @n: the element to add to the end of the list.
 * Description: if head->next = NULL
 * make head->next = n & n->next = NULL
 *
 * Return: Alywas (temp) Success.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (!head || !temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (!*head)
		*head = temp;

	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
