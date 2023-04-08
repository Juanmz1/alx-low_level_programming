#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * err_msg - function that check for errors
 * @err: const char pointer containing the error msg
 * @file: file to be access int
 * Return: void
*/
void err_msg(char *err, int file)
{
	dprintf(STDERR_FILENO, "%s\n", err);
	exit(file);
}
/**
 * main - function to copy file content
 * @argc: number of arguments pass
 * @argv: vector containing the arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t read, written;

	if (argc != 3)
	{
		err_msg("Usage: cp file_from file_to", 97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		err_msg(98, "Error: can't read from file", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		err_msg(99, "Error: can't write to file", argv[2]);
	}
	read = read(file_from, buffer, 1024);
	if (read == -1)
	{
		err_msg("Error: can't read to file", 98);
	}
	written = write(file_to, buffer, read);
	if (written != read)
	{
		err_msg("Error: can't write to file", 99);
	}
	if (close(file_from) == -1)
	{
		err_msg("Error: can't close fd from file_from", 100);
	}
	if (close(file_to) == -1)
	{
		err_msg("Error: can't close fd from file_to", 100);
	}
	return (0);
}
