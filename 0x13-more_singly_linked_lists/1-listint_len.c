#include "lists.h"

/**
 * listint_len - Function tha returns the number of elements in a list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

		while (h)
	{
		h = h->next;
		numb++;
	}

	return (numb);
}
