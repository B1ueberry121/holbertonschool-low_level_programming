#include "holberton.h"

int get_len(unsigned int x);

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number passed
 * @index: index to count untill
 * Return: (n & 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;
	unsigned int len;

	len = get_len(n);

	if (index > (len - 1))
	{
		return (-1);
	}

	for (count = 0; count < index; count++)
	{
		n = n >> 1;
	}

	return (n & 1);
}

/**
 * get_len - prints out recursion
 * @x: unsigned int
 * Return: length
 */

int get_len(unsigned int x)
{
	int count = 1;

	if ((x / 2) > 0)
	{
		count += get_len(x / 2);
	}

	return (count);
}
