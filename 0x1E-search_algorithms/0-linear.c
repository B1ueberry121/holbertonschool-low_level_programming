#include "search_algos.h"

/**
 * linear_search - searches given array for given value
 * @array: given array to search
 * @size: size of given array
 * @value: value to search for
 * Return: returns index of where the value is if not -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%i] = [%i]\n", x, array[x]);

		if (array[x] == value)
			return (x);
	}
	return (-1);
}
