#include "holberton.h"

/**
 * *_strncat - Concatenates two string
 * @dest: pointer variable
 * @src: pointer variable
 * @n: variable
 * Return: the result of the concantination
 */

char *_strncat(char *dest, char *src, int n)
{
	int ln = 0;
	int c = 0;

	while (dest[ln] != '\0')
	{
		ln++;
	}
	while (c < n)
	{
		dest[ln] = src[c];
		c++;
		ln++;
	}
	return (dest);
}
