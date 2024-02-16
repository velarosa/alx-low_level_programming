#include "lists.h"

/**
 * get_nodeint_at_index - function that returnes the nth node.
 * @head: the first node in the list.
 * @index: the Nth node.
 * Description: loop till count = index = ptr_to_(head)
 *
 * Return: Alywas (count) Success.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int  i;

	for (ptr = head, i = 0; ptr && i < index; ptr = ptr->next, i++)
		;
	return (ptr);
}
