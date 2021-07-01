#include "holberton.h"

/**
 * string_toupper - converts string to upper case
 * @c: input
 * Return: something at the moment
 */

char *string_toupper(char *c)
{
	int idx = 0;

	while (c[idx] != 0)
	{
		if (c[idx] >= 'a' && c[idx] <= 'z')
			c[idx] -= 32;
		idx++;
	}
	return (c);
}
