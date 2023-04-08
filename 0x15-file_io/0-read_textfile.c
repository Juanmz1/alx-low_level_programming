#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: a pointer to a const char
 * @letters: a size_t to print and read the number of letter
 * Return: if write fails or does not write
 * the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, read, written;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	read = read(fd, buffer, letters);
	written = write(STDOUT_FILENO, buffer, read);

	if (fd == -1 || read == -1 || written != read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (written);
}
