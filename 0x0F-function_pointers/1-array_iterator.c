#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given
 * @array: holds the elments
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action == NULL || array == NULL || size <= 0)
		return;
	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
