#include "holberton.h"

/**
 * print_diagonal - prints slash diagonally
 * @n: Variable
 */

void print_diagonal(int n)
{
	int l;
	int w;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (w = 0; w <= l; w++)
			{
				if (w == l)
				{
					_putchar('\\');
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
