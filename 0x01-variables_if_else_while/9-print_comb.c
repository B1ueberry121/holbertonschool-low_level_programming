#include <stdio.h>

/**
 *main-Generates numbers with a coma
 *Return:Ends the program
 */

int main(void)
{
	int love = '0';

	while (love <= '9')
	{
		putchar(love);
		if (!(love == '9'))
		{
		putchar(',');
		putchar(' ');
		}
		love++;
	}
	putchar('\n');

	return (0);
}
