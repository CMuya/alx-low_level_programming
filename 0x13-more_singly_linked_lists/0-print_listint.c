#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 * @h: pointer to the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)

{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb++;
	}

	return (numb);
}

