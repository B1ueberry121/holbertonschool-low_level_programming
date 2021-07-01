#include "holberton.h"

/**
 * _strcmp - Compares to string
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 if equals, -1 if less, 1 if more
 */

int _strcmp(char *s1, char *s2)
{
	int idx = 0;
	int x = 0, y = 0;

	while (s1[x] != 0)
	{
		x++;
	}
	while (s2[y] != 0)
	{
		y++;
	}
	while (s1[idx] != '\0' && s2[idx] != '\0')
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	if (x > y)
	{
		return (s1[y]);
	}
	else if (x < y)
	{
		return (s2[x] * -1);
	}
	return (0);
}
