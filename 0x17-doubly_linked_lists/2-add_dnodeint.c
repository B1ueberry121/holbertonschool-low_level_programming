#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a link list
 * @head: header of a linked list
 * @n: the value of the nodes
 * Return: returns a new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;

	if (newnode->next)
	{
		newnode->next->prev = newnode;
	}

	return (newnode);
}
