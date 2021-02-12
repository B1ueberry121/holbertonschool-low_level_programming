#include "holberton.h"

/**
 * print_square - Prints a square following a new line
 * @size: Variable and size of the square
 */

void print_square(int size)
{
	int w;
	int l;

	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
