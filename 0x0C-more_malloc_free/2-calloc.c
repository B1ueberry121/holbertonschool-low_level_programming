#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: how many blocks of space
 * @size: size of char
 * Return: the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int ind;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind < (nmemb * size); ind++)
	{
		ptr[ind] = 0;
	}
	return (ptr);
}
