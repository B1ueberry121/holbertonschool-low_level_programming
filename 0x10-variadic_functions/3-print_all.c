#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @pip: char variable
 */

void sw_char(va_list pip)
{
	printf("%c", va_arg(pip, int));
}

/**
 * print_int - prints a integer
 * @pip: int variable
 */

void sw_int(va_list pip)
{
	printf("%i", va_arg(pip, int));
}

/**
 * print_flo - prints a float
 * @pip: float variable
 */

void sw_flo(va_list pip)
{
	printf("%f", va_arg(pip, double));
}

/**
 * print_str - prints a string
 * @pip: pointer variable
 */

void sw_str(va_list pip)
{
	char *s = va_arg(pip, char *);

	if (s == NULL)
	{
		s = "(nil)";
		printf("%s", s);
	}
	printf("%s", s);
}
 
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list pip;

	sw_t lst[] = {
		{"c", sw_char},
		{"i", sw_int},
		{"f", sw_flo},
		{"s", sw_str},
		{NULL, NULL}
	};

	int y;
	int x = 0;
	char *separator = "";

	va_start(pip, format);

	while (format[x] != '\0')
	{
		y = 0;

		while (lst[y].op != NULL)
		{
			if (format[x] == *(lst[y].op))
			{
				printf("%s", separator);
				lst[y].f(pip);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	putchar('\n');
}
