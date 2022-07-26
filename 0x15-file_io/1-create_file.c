#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, x = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	while (text_content[x])
		x++;

	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}
	else
	{
		write(file, text_content, x);
	}

	close(file);
	return (1);
}

