#include "list_t"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: head of the nodes.
 * Description: print every node in the given linked list.
 *
 * Return: size_t of elements, in str is NULL print [0] (nil).
 */

size_t print_list(const list_t *h)
{
	list_t temp  = head;

	while (*h != NULL)
	{
		printf("%d", temp->str);
		temp = temp->next;
		leng++;
	}
	return (size_t(leng));
}
