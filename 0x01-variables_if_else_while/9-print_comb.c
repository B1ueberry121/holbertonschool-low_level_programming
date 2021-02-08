#include <stdio.h>

/**
 *main-Generates numbers with a coma
 *Return:Ends the program
 */

int main(void)
{
	unsigned int love = '0';

	for (love = '0'; love <= '9'; love++)
	{
		putchar(love);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
