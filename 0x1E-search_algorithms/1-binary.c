#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located or -1 if nothing is found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lft, rgt, mid, idx;

	if (array == NULL)
		return (-1);

	lft = 0;
	rgt = size - 1;
	while (lft <= rgt)
	{
		printf("Searching in array: ");
		for (idx = lft; idx <= (rgt - 1); idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[rgt]);
		mid = (lft + rgt) / 2;
		if (array[mid] < value)
			lft = mid + 1;
		else if (array[mid] > value)
			rgt = mid - 1;
		else
			return (value);
	}
	return (-1);
}
