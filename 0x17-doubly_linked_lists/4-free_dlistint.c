#include "lists.h"

/**
 * free_dlistint - frees memory allocated of a linklist
 * @head: header of the link list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *headptr;

	while (head != NULL)
	{
		headptr = head;
		head = head->next;
		free(headptr);
	}
}
