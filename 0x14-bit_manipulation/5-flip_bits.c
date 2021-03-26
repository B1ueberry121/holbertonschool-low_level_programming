#include "holberton.h"

/**
 * flip_bits - returns the number of bits needed to flip one num to the other
 * @n: First num to check bits
 * @m: Second num to check bits
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_len = 0, m_len = 0, flip = 0;
	unsigned long int store_n = n, store_m = m;

	while (n > 0)
	{
		n >>= 1;
		num_len++;
	}
	while (m > 0)
	{
		m >>= 1;
		m_len++;
	}
	m = store_m;
	n = store_n;

	if (m_len > num_len)
	{
		while (m_len > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m >>= 1;
			n >>= 1;
			m_len--;
		}
	}
	else
	{
		while (num_len > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m >>= 1;
			n >>= 1;
			num_len--;
		}
	}
	return (flip);
}
