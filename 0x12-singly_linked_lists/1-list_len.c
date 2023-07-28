#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in linked list
 * @h: pointer to the list
 *
 * Return: number of elements in h
 *
 * description: singly linked list node structure
 *
 */
size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		f++;
		h = h->next;
	}
	return (f);
}
