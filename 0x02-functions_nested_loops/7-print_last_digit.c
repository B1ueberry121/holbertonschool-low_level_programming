#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @i: Variable
 * Return: Ends the program
 */

int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
	{
		i = (i * -1);
	}
	_putchar(i);
	return (i);
}
