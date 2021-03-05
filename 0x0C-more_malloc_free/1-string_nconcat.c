#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_length - checks the length of the string
 * @s: string
 * Return: the length of the string
 */

int check_length(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of elements
 * Return: The unification of both strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len2 = 0, nrs, rs;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = check_length(s1);
	len2 = check_length(s2);

	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc(len + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (rs = 0; rs < len; rs++)
	{
		ptr[rs] = s1[rs];
	}
	for (nrs = 0; nrs < n; nrs++)
	{
		ptr[rs] = s2[nrs];
		rs++;
	}
	ptr[nrs + rs] = '\0';
	return (ptr);
}
