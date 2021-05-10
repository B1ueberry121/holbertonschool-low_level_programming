#include "holberton.h"

/**
 * *_strcpy - copiesthea string pointed to by src
 * @dest: string to be recieveing the copy
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int num = 0;
	int counter;

	for (counter = 0; src[counter] != '\0'; counter++)
	{
		num++;
	}
	for (counter = 0; counter <= num; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
