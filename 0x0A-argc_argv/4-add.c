#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counter
 * @argv: adds
 * Return: the result
 */

int main(int argc, char *argv[])
{
	int x, tl;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (x = 1; x < argc; x++)
	{
		if (*argv[x] >= 48 && *argv[x] <= 57)
		{
			tl += atoi(argv[x]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", tl);

	return (0);
}
