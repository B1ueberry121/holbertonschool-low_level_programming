#include "holberton.h"
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: pointer to the destination array where the content is to be copied
 * @src: string to be copied
 * @n: number of charactes to be copied from src
 * Return: returns the final copy of the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
