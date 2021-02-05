#include <stdio.h>

/**
 *main-generate all letters
 *Return: Ends the program
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
