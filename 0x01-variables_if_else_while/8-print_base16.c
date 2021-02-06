#include <stdio.h>

/**
 *main-Generates letters and numbers base 16
 *Return:Ends the program
 */

int main(void)
{
	char vibe = 'a';
	char math = '0';

	for (math = '0'; math <= '9'; math++)
	{
	putchar(math);
		}
		for (vibe = 'a'; vibe <= 'f'; vibe++)
		{
		putchar(vibe);
	}
	putchar('\n');

	return (0);
}
