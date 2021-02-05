#include <stdio.h>

/**
 *main-Generating the alphabet
 *Return:Ends the program
 */

int main(void)
{
	char texas = 'z';

	for (texas = 'z'; texas >= 'a'; texas--)
	{
		putchar(texas);
	}
	putchar('\n');
	return (0);
}
