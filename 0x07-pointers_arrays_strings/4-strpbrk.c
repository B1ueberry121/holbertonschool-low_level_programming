#include "holberton.h"

/**
 * _strpbrk - gets length of a prefix substring
 * @s: string to check
 * @accept: substring
 * Return: count
 */

char *_strpbrk(char *s, char *accept)
{
	int idx1 = 0, idx2 = 0;

	while (s[idx1] != '\0')
	{
		while (accept[idx2] != '\0')
		{
			if (accept[idx2] == s[idx1])
				return (s + idx1);
			idx2++;
		}
		idx1++;
		idx2 = 0;
	}
	return ('\0');
}
