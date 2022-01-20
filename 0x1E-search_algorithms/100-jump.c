#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: returns an index of value or -1 when it fails
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx, x;
	size_t jump = sqrt(size);

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx += jump)
	{
		if (array[idx] < value)
		{
			x = idx;
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		}
		if (array[idx] >= value)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", x, idx);
	for (idx = x; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
