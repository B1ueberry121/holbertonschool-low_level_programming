#include "holberton.h"

/**
 * c - represents the code
 * _islower - looking for the lower case letters 
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
