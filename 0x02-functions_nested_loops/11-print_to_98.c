#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Generates numbers to 98
 * @n: Variable
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%i, ", n);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%i, ", n);
	}
	printf("98\n");
}
