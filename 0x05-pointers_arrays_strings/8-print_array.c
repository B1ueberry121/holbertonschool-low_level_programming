#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints elements of any array
 * @a: pointer variable
 * @n: variable
 */

void print_array(int *a, int n)
{
	int ct = 0;

	while (ct < n)
	{
		printf("%d", a[ct]);
		if (ct < n - 1)
			printf(", ");
			ct++;
	}
	putchar('\n');
}
