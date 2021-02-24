#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: numbers
 * Return: the solution
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return(n);
	}
}
