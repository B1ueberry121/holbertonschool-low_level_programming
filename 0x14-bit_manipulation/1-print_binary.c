#include "holberton.h"

/**
 * print_binary - prints the binary representation of a num
 * @n: the number that will be given 
 */

void print_binary(unsigned long int n)
{
	unsigned i;

	for (i = (1 << 31); i > 1; i = (i >> 1))
	{
		if (n & i)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
