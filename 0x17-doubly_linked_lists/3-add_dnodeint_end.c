#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: header of a linked list
 * @n: the value of the nodes
 * Return: returns a nnew node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *endnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (0);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		endnode = *head;

		while (endnode->next != NULL)
		{
			endnode = endnode->next;
		}
		endnode->next = newnode;
		newnode->prev = endnode;
	}
	return (newnode);
}
