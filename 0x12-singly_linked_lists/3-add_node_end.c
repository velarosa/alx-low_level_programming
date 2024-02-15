#include "lists.h"


/**
 * add_node_end - a function that adds a new node at the end of a list.
 * @head: the first node in the list.
 * @str: the given string.
 * Description: if node->next = NULL then node->next = str & str->next = NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	ptr = *head;
	temp = (list_t *)malloc(sizeof(list_t));

	if (!ptr || !temp)
		return (NULL);

	if (str)
	{
		temp->str = strdup(str);
		if (!temp->str)
		{
			free(temp);
			return (NULL);
		}
		temp->len = strlen(temp->str);
	
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	else
		*head = temp;
	return (temp);
}