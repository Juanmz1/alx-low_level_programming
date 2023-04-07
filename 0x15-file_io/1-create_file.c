#include "main.h"
#include <string.h>

/**
 * create_file - create a function that creates a file
 * @filename: a pointer to a const char thats the file name
 * @text_content: a pointer to a char.
 * is a null terminated string to write to the file
 * Return: NULL if it fail
*/
int create_file(const char *filename, char *text_content)
{
	int read, written, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	read = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(read, text_content, len);
	if (read == -1 || written == -1)
	{
		close(read);
		return (-1);
	}
	return (1);
}
