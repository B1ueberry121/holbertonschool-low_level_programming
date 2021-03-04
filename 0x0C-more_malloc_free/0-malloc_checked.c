#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checed - allocates memory
 * @b: value of malloc
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return(ptr);	
}
