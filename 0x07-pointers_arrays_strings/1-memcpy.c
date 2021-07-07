#include "holberton.h"

/**
 * _memcpy - copies n bytes of memory to new string
 * @dest: string that will recieve the copy
 * @src: string to copy
 * @n: copies n bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
