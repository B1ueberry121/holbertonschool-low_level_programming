#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches an integer
 * @array: holds the elements
 * @size: size of the array
 * @cmp: pointer to function
 * Return: the result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		cmp(array[x]);

		if (cmp(array[x]) != 0)
			return (x);
	}

	return (-1);
}
