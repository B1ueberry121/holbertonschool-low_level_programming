#include "holberton.h"

/**
 * _memset - sets memory in buffer to b
 * @s: buffer to be changed
 * @b: char to be set
 * @n: amount of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i = 0;

	while ((i < n))
	{
		s[i] = b;
		i++;
	}
	return (s);
}
