#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: head of the link list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeds or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	tmp = current->next->next;
	free(current->next);
	current->next = tmp;

	return (1);
}
