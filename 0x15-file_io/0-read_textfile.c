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
	ssize_t read, written;
	FILE *fp;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen("filename", "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) *letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	read = fread(buffer, sizeof(char), letters, fp);
	if (read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	written = fwrite(buffer, sizeof(char), read, stdout);
	if (written != read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);

	return (written);
}
