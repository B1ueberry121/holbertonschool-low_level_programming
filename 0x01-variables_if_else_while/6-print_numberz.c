#include <stdio.h>

/**
 *main-Generates numbers without char
 *Return:Ends the program
 */

int main(void)
{
	unsigned int ui = '0';

	for (ui = '0'; ui <= '9'; ui++)
	{
		putchar(ui);
	}
	putchar('\n');
	return (0);
}
