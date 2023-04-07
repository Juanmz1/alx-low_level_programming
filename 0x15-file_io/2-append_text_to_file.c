#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends test at the end of a file
 * @filename: pointer to a const char containing the name of the file
 * @text_content: is a null terminated string to add at the end of the file
 * Return: Null if it fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int read, written, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	read = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	if (read == -1)
	{
		close(read);
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		written = write(read, text_content, len);
		if (written == -1 || written != len)
		{
			close(read);
			return (-1);
		}
	}
	return (1);
}

