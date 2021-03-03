#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: is the counter
 * @argv: void
 * Return: the counter
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
