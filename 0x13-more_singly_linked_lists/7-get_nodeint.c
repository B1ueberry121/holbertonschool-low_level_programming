#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of the link list
 * @index: index of the node
 * Return: the node which the user wants
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
