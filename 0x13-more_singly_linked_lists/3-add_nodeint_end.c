#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: pointer to the head of the element in the list
 * @n: return to the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *a_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (a_node->next)
		a_node = a_node->next;

	a_node->next = new_node;

	return (new_node);
}
