#include "holberton.h"

/**
 * puts2 - prints every character of a string
 * @str: pointer variable
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
