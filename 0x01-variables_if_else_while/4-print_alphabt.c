#include <stdio.h>

/**
 *main-Generates the alphabet except some value
 *Return:Ends the program
 */

int main(void)
{
	char beta = 'a';

	for (beta = 'a'; beta <= 'z'; beta++)
	{
		if ((beta != 'e') && (beta != 'q'))
			putchar(beta);
	}
	putchar('\n');

	return (0);
}
