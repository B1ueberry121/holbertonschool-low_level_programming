#include "holberton.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: pointer variable
 * @src: pointer variable
 * Return: the result of the new string
 */

char *_strcat(char *dest, char  *src)
{
	int c = 0;
	int n = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[n] != '\0')
	{
		dest[c] = src[n];
		n++;
		c++;
	}
	return (dest);
}
