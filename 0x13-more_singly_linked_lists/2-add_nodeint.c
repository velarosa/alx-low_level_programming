#include "lists.h"

/**
 * add_nodeint - a function that adds anew node at the beginning of a list.
 * @head: the first node in the list.
 * @n: the node to be add.
 * Description: make head = head->next and n =  head.
 *
 * Return: Alwyas (n) Success.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (!head || !temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head)
	{
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
