#include "holberton.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: set to the value to 0
 * Return: 1 if it succeds or -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num2;
	unsigned long int num;
	unsigned long int count;
	unsigned long int x;

	num2 = count = num = 0;
	x = *n;

	if (index > 63)
	{
		return (-1);
	}
	while (count < 63)
	{
		num2 <<= 1;
		if (count == index)
		{
			num2 += 1;
		}
		else
		{
			num2 += x & 1;
		}
		count++;
		x >>= 1;
	}
	while (count > 0)
	{
		num <<= 1;
		num += num2 & 1;
		num2 >>= 1;
		count--;
	}
	*n = num;
	return (1);
}
