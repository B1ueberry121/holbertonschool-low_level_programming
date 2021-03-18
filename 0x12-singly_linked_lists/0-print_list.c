#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: head of the link list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
