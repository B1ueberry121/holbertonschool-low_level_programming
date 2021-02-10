#include "holberton.h"

/**
 *
 *
 *
 */

int print_last_digit(int a)
{
	i = i % 10;

	if (i < 0)
	{
		i = (i * -1);
	}
	_putchar(i);
	return (i);
}
