#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list.
 * @head: first node.
 * @str: the string to add at the begining of a list.
 * Description: make the given string point to head node
 * and head node point to the new string.
 *
 * Return: address of the new element and NULL in failluer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);

	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
