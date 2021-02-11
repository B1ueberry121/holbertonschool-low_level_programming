#include "holberton.h"

/**
 * more_numbers - Generates numbers multiple times
 */

void more_numbers(void)
{
	int ch = 0;
	int i = 0;

	while (i < 10)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
				_putchar(ch / 10 + 48);
				_putchar(ch % 10 + 48);
		}
	_putchar('\n');
	i++;
	}
}
