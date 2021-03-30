#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: file
 * @letters: number of bytes to read from file
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	size_t byte;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	byte = read(i, buffer, letters);

	write(STDOUT_FILENO, buffer, byte);

	close(i);
	free(buffer);
	return (byte);
}
