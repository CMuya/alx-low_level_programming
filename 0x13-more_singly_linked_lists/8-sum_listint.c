#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data
 * @head: first node in the linked list
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *a_node = head;

	while (a_node)
	{
		sum += a_node->n;
		a_node = a_node->next;
	}

	return (sum);
}
