#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: file
 * @letters: number of bytes to read from file
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	size_t byte;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	byte = read(file_d, buffer, letters);

	write(STDOUT_FILENO, buffer, byte);

	close(file_d);
	free(buffer);
	return (byte);
}
