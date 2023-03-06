#include "main.h"

/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: string
 * @c: char
 * Return: string
*/
char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
