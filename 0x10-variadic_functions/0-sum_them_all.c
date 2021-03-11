#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: hold how many parameters are coming
 * @Return: the result of the addition
 */

int sum_them_all(const unsigned int  n, ...)
{
	va_list pip;
	unsigned int x;
	int y = 0;

	if (n == 0)
		return(0);
	va_start(pip, n);
	
	for (x = 0; x < n; x++)
	{
		y += va_arg(pip, int);
	}
	va_end(pip);
	return (y);
}
