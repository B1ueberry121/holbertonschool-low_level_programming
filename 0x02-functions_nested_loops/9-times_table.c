#include <stdlib.h>
#include "holberton.h"

/**
 * times_table - print a 9 times table
 *
 */

void times_table(void)
{
	int i;
	int j;
	int r;
	int r1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			r1 = ((r / 10) + '0');

			if (r1 != '0')
			{
				_putchar(r1);
			}
			else if (j > 0)
			{
				_putchar(' ');
			}
			_putchar((r % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
