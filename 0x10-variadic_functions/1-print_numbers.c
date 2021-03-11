#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: is the sting
 * @n: the number of parameters that will come
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pip;
	unsigned int x;
	int y = 0;

	va_start(pip, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(pip, int);
		printf("%i", y);
		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(pip);
}
