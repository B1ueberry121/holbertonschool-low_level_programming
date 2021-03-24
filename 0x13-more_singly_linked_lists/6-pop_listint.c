#include "lists.h"

/**
 * pop_listint - deletes the head of a linklist
 * @head: head of the link list
 * Return: the head of the nodes data
 */

int pop_listint(listint_t **head)
{
	int count = 0;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		current = *head;
		count = current->n;
		*head = current->next;
		free(current);
	}
	return (count);
}
