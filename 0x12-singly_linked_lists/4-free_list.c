#include "lists.h"

/**
 * free_list - frees data from list
 * @head: head of the link list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
