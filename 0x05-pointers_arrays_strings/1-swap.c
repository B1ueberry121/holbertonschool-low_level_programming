#include "holberton.h"

/**
 * swap_int - Swaps the values of two int
 * @a: Variable
 * @b: Variable
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

