#include "holberton.h"

/**
 * print_sign - Prints a sign of a number
 * @n: Variable
 * Return: Ends the program
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}

	_putchar('-');
	return (-1);
}
