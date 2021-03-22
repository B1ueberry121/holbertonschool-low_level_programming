#include "lists.h"

/**
 * free_listint - frees allocated memory
 * head: head of the link list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
