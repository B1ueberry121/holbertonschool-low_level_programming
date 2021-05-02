#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a link list
 * @h: header of the linked list
 * Return: number of elements of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
