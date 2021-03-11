#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: is the string which separates with comma and space
 * @n: the number of parameters that will come
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pip;
	unsigned int x;
	char *y;

	va_start(pip, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(pip, char *);
		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);
		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(pip);
}
