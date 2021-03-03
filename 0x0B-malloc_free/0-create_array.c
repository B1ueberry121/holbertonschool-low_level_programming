#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * size: the size of the array
 * c: the array
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
	{
		return (NULL);
	}
	ch = malloc(size * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	ch[i] = '\0';

	return (ch);
}
