#include "main.h"

/**
 * read_textfile - functoin that reads a text file and prints
 * it to the PSIX stanard output
 * @filename: file name
 * @letters: size
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	r = read(file, buffer, letters);
	if (r == -1)
		return (0);

	buffer[letters] = '\0';

	w = write(1, buffer, r);
	if (w == -1)
		return (0);

	close(file);
	free(buffer);
	return (w);
}
