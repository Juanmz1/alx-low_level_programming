#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: string
 * @src: string
 * @n: unsigned int
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
