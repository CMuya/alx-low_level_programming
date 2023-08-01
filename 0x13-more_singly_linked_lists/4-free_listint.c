#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *a_node;

	while (head)
	{
		a_node = head->next;
		free(head);
		head = a_node;
	}
}
