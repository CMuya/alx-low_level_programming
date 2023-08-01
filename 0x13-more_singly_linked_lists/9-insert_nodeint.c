#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node in a list
 * @head: pointer to the head node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *a_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; a_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = a_node->next;
			a_node->next = new_node;
			return (new_node);
		}
		else
			a_node = a_node->next;
	}

	return (NULL);
}
