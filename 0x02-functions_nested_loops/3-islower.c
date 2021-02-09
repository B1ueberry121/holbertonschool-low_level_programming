#include "holberton.h"

/**
 * _islower - looking for the lower case letters
 * @c: Variable
 *Return: Ends the prgram
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
