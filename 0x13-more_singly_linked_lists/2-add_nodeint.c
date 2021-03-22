#include "lists.h"

/**
 * add_nodeint - adds a new node at the begging of a list
 * @head: head of the link list
 * @n: element of the link list
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (n == '\0')
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
	new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}
