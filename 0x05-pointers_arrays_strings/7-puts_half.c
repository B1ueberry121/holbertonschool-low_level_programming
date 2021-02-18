#include "holberton.h"

/**
 * puts_half - prints half a string
 * @str: pointer variable
 */

void puts_half(char *str)
{
	int i, len = 0, n;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else if (len % 2 != 0)
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
