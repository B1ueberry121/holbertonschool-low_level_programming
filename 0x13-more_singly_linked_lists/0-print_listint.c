#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the list
 * @h: head of the link list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("0\n");
		}
		else
		{
		printf("%i\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);
}
