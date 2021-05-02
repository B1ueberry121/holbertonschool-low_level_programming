#include "lists.h"

/**
 * get_dnodeint_at_index - returns a given node from a link list
 * @head: header of the link list
 * @index: index of the nodes
 * Return: returns head if it gets the position or NULL if not
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int interactor = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (interactor < index && head != NULL)
	{
		interactor++;
		head = head->next;
	}

	if (interactor == index)
	{
		return (head);
	}
	return (0);
}
