#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Generates random value to a number
 *
 * Return:Ends the program
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	if (n > 0)
	printf("%i is positive", 'n');
	if (n == 0)
	printf("%i is zero", 'n');
	if (n < 0)
	printf("%i is negative", 'n');
	}
	return (0);
}
