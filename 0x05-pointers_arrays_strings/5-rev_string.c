#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: pointer variable
 */

void rev_string(char *s)
{
	int lg = 0;
	int sw = 0;
	int tmp;

	while (s[lg] != '\0')
	{
		lg++;
	}
	lg--;

	while (sw < lg)
	{
		tmp = s[lg];
		s[lg] = s[sw];
		s[sw] = tmp;

		sw++;
		lg--;
	}
}
