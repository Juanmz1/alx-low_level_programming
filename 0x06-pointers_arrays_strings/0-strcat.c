#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: appending the destination string
 * @src: appending the source string
 *
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
	char dest[] = "Hello";
	char src[] = "World";

	_putchar("Concatenated String: %s\n", strcat(dest, src));
	return (0);
}
