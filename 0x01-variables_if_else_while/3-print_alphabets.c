#include <stdio.h>

/**
 *main-Generates lower and capital alphabet
 *Return:Ends the program
 */

int main(void)
{
	char omega = 'a';
	char delta = 'A';

	for (omega = 'a'; omega <= 'z'; omega++)
	{
	putchar(omega);
		}
		for (delta = 'A'; delta <= 'Z'; delta++)
		{
		putchar(delta);
	}
	putchar('\n');

	return (0);
}
