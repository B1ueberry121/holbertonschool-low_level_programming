#include "holberton.h"

/**
 * _strchr - locates a character in a stirng
 * @s: string given
 * @c: character given
 * Return: pointer to the first ocurrence c, NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
