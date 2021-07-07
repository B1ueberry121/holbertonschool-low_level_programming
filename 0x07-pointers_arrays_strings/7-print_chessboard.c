#include "holberton.h"

/**
 * print_chessboard - print chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	unsigned int x = 0, y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
