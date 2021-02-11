#include "holberton.h"

/**
 * _isupper - Checks for Upper case
 * @c: Variable
 * Return: Ends the program
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
