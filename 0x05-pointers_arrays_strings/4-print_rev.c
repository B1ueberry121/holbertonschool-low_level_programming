#include "holberton.h"

/**
 * print_rev - prints a str in rev
 * @s: pointer variable
 */

void print_rev(char *s)
{
	int i = 0;
	int n;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = n - 1; n >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
