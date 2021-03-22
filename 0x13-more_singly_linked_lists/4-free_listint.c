#include "lists.h"

/**
 * free_listint - frees allocated memory
 * head: head of the link list
 */

void free_listint(listint_t *head)
{
	listint_t *node;
	
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
