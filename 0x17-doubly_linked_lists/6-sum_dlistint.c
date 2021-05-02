#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a link list
 * @head: head of the inked list
 * Return: the result of sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sumnode = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sumnode += head->n;
		head = head->next;
	}
	return (sumnode);
}
