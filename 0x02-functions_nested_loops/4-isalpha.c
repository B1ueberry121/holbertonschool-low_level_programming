#include "holberton.h"

/**
 * _isalpha - Checks for caps letters
 * @c: variable
 * Return: Ends the program
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
