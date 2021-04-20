#include <stdio.h>

/**
 *main-Generates all posible two digit combos
 *Return:Ends the program
 */

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 99; d1++)
	{
		for (d2 = 0; d2 <= 99; d2++)
		{
			if ((d1 != d2) && (d1 < d2))
			{
				putchar((d1 / 10) + '0');
				putchar((d1 % 10) + '0');
				putchar(' ');
				putchar((d2 / 10) + '0');
				putchar((d1 % 10) + '0');
				if (!(d1 == 98 && d2 == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
