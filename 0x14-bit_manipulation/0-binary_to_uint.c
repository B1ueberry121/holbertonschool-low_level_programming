#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointing to string of 0 and 1
 * Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	len = str_len(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}

/**
 * str_len - checks the length of the string
 * @s: the string
 * Return: the length
 */

int str_len(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
