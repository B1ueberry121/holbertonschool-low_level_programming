#include "holberton.h"
/**
 * reverse_array- reverses an array
 * @a: input array
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int tmp[100000];
	int idx = 0;

	while (idx < n)
	{
		tmp[idx] = a[idx];
		idx++;
	}
	n--;
	idx = 0;
	while (n >= 0)
	{
		a[n] = tmp[idx];
		n--;
		idx++;
	}
}
