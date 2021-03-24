#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: head of the link list
 * @idx: index of the list
 * @n: the new node that will be inserted
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev_node = *head;
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	while (i <= idx && prev_node != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = prev_node->next;
			prev_node->next = new_node;
			return (new_node);
		}
		prev_node = prev_node->next;
		i++;
	}
	return (NULL);
}
