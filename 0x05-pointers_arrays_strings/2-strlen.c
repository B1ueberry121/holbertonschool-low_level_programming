#include "holberton.h"

/**
 * _strlen - Returns the length of string
 * @s: pointer Variable
 * Return: Ends the program
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
