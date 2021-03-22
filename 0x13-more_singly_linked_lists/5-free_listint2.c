#include "lists.h"

/**
 * free_listint2 - frees allocated memory from lists
 * @head: head of the link list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
}
