#include "holberton.h"
#include <time.h>
/**
 * jack_bauer - Printing time
 *
 * Return: Ends the program
 */

void jack_bauer(void)
{
	int hr = 0;
	int mi = 0;

	for (hr = 0; hr < 24; hr++)
	{
		for (mi = 0; mi < 60; mi++)
		{
			_putchar(hr / 10 + 48);
			_putchar(hr % 10 + 48);
			_putchar(':');
			_putchar(mi / 10 + 48);
			_putchar(mi % 10 + 48);
			_putchar('\n');
		}
	}
}
