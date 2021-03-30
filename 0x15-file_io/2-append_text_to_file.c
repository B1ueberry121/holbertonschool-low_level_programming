#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 if success and -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, index = 0;
	size_t count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_d = open(filename, O_APPEND | O_WRONLY, 00664);

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
