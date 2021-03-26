#include "holberton.h"

/**
 * print_binary - prints the binary representation of a num
 * @n: the number that will be given
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int new_n = n;
	int len = 0;

	while (new_n > 0)
	{
		len++;
		new_n >>= 1;
	}
	len -= 1;

	if (len > 0)
	{
		mask = mask << len;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	mask = mask >> 1;
	}
}
