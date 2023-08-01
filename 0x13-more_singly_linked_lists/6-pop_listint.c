#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the head element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *a_node;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	a_node = (*head)->next;
	free(*head);
	*head = a_node;

	return (numb);
}
