#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: counter
 * @argv: multiplies
 * Return: cthe result
 */

int main(int argc, char *argv[])
{
	int x, y, tl;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	tl = x * y;

	printf("%d\n", tl);
	return (0);
}
