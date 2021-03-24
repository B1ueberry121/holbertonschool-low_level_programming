#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a list
 * @head: head of the link list
 * Return: the result of the summarised nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
