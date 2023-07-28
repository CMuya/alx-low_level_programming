#include <stdio.h>
#include "lists.h"

/**
 * Print_list - function that prints the elements of a list
 * @h: pointer to the list_t
 *
 * Return: the number of nodes
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		f++;
	}

	return (f);
}
