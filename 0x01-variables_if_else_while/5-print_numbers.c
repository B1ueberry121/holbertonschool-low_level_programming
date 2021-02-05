#include <stdio.h>

/**
 *main-Generates numbers
 *Return:Ends the program
 */

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
