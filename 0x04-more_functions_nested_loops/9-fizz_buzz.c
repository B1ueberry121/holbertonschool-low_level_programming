#include "holberton.h"
#include <stdio.h>

/**
 * main - Generates numbers but substituts some for words
 * Return: Ends the program
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	putchar('\n');
	return (0);
}
