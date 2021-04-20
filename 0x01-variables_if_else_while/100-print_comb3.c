#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int x, n;

	for (x = 0; x <= 8; x++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (x != n && n != 0 && x < n)
			{
				putchar (x + '0');
				putchar (n + '0');
				if (!((x == 8) && (n == 9)))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
