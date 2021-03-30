#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 if success, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, index = 0;
	size_t count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file_d = open(filename, O_CREAT, 00600);
		if (file_d == -1)
		{
			return (-1);
		}
		return (1);
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (file_d == -1)
		return (-1);

	while (text_content[index])
	{
		index++;
		count++;
	}

	write(file_d, text_content, count);

	close(file_d);
	return (1);
}
