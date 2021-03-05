#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: begining of the array
 * @max: ending of the array
 * Return: the created array
 */

int *array_range(int min, int max)
{
	int ind, x = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (ind = min; ind <= max; ind++)
	{
		ptr[x] = ind;
		x++;
	}
	return (ptr);
}
