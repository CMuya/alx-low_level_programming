#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: list_t list to be freed
 *
 * description: singly linked list node structure
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
