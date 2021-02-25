#include "holberton.h"

/**
 * factor_check - checks for the prime number
 * @n: number
 * @f: variable
 * Return: the reuslt
 */

int factor_check(int n, int f)
{
	if (n % f == 0)
	{
		return (0);
	}
	else if (f > n / f)
	{
		return (1);
	}
	else
	{
	return (factor_check(n, f + 1));
	}
}

/**
 * is_prime_number - returns the prime number
 * @n: number
 * Return: the result
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
	return (factor_check(n, 2));
	}
}
