#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data.
 * @head: first node in the list.
 * Description: finde the sum of all the nodes.
 *
 * Return: sum ? sum : 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
