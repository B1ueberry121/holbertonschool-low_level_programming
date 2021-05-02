#include "lists.h"

/**
 * dlistint_len - gets the length of the element of the nodes
 * @h: header of the linked list
 * Return: the length of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

/**
 * insert_dnodeint_at_index - inserts a new node at agiven position
 * @h: header of the linked list
 * @idx: index of the nodes
 * @n: value of the new node that will be added
 * Return: the new value
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmpnode;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx > dlistint_len(*h))
		return (NULL);
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	tmpnode = *h;
	while (index != idx)
	{
		tmpnode = tmpnode->next;
		index++;

		if (tmpnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}

	tmpnode->prev->next = newnode;
	newnode->next = tmpnode;
	newnode->prev = tmpnode->prev;
	tmpnode->prev = newnode;

	return (newnode);
}
