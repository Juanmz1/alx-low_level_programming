#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string.
 * @dest: first parameter
 * @src: second parameter
 * @n: integer
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
