#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a linked list
 * @head: pointer to the head element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a_node = *head;
	listint_t *new = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(a_node);
		return (1);
	}

	while (j < index - 1)
	{
		if (!a_node || !(a_node->next))
			return (-1);
		a_node = a_node->next;
		j++;
	}


	new = a_node->next;
	a_node->next = new->next;
	free(new);

	return (1);
}
