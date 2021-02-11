#include "holberton.h"

/**
 * _isdigit - Checks for digits
 * @c: Variable
 * Return: Ends the program
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
