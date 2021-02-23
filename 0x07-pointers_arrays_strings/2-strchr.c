#include "holberton.h"

/**
 * _strchr - locates a character in a stirng
 * @s: string to be searched through
 * @c: character to be located
 * Return: pointer to the first ocurrence c, NULL if character is not found
 */

char *_strchr(char *s, char *c)
{
	int incres;

	for (incre = 0; s[incre] != '\0'; incre++)
	{
		if (s[incre] == c)
		{
			return (s + incre);
		}
	}
	if (s[incre] == c)
	{
		return (s + incre);
	}
	return ('\0');
}
