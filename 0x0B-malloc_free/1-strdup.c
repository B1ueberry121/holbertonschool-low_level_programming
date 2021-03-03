#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: the copied string
 */

char *_strdup(char *str)
{
	char *ch;
	int x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		x++;
	}
	ch = malloc(x * sizeof(char) + 1);

	if (ch == 0)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		ch[x] = str[x];
	}
	return (ch);
	free(ch);
}
