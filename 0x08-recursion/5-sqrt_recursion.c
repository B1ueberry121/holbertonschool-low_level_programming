#include "holberton.h"

/**
 * sqrt_check - checks the natural square root of a number
 * @n: root
 * @c: number
 * Return: the result
 */

int sqrt_check(int n, int c)
{
	if (n == c * c)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	else
	{
	return (sqrt_check(n, c + 1));
	}
	return (0);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: root
 * Return: the result
 */

int _sqrt_recursion(int n)
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
		return (sqrt_check(n, 1));
	}
	return (0);
}
