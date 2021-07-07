#include "holberton.h"

/**
 * print_chessboard - prints a chess board
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int row = 0, col = 0;

	while (a[col][row] != '\0')
	{
		while (row < 8)
		{
			_putchar(a[col][row]);
			row++;
		}
		row = 0;
		_putchar('\n');
		col++;
	}
}
