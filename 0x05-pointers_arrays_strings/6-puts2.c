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
	if ((i != 1) && (i != 3) && (i != 5) && (i != 7) && (i != 9))
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
