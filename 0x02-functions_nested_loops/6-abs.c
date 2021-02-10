#include "holberton.h"

/**
 * _abs - Shows the absolute value of an interger
 * @i: Variable
 * main - Shows the absolute value of an interger
 * Return: Ends the program
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
