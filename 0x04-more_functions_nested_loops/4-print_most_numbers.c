#include "holberton.h"

/**
 * print_most_numbers - Prints numbers except 2 and 4
 */

void print_most_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
			_putchar(ch);
	}
	_putchar('\n');
}
