#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number passed
 * @index: index to count untill
 * Return: (n & 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;
	unsigned long int len_bit;

	len_bit = (sizeof(unsigned long int) * 8);

	if (index > len_bit)
	{
		return (-1);
	}

	for (count = 0; count < index; count++)
	{
		n = n >> 1;
	}

	return (n & 1);
}
