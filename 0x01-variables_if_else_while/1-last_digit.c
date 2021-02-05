#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Will generate a random value and pick the last number
 *Return: Ends the program
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (n > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, x);
	if (n == 0)
	printf("Last digit of %i is %i and is 0\n", n, x);
	if (n < 6)
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);

	return (0);
}
