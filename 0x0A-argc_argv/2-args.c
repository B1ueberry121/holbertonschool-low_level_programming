#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: counter
 * @argv: Vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
