#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: holds the name
 * @f: poiter to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
