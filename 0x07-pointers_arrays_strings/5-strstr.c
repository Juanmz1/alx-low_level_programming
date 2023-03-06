#include "main.h"

/**
 * *_strstr -  function that locates a substring.
 * @haystack: string
 * @needle: string
 * Return: Returns a pointer to the beginning of the located substring,
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (*haystack == needle[a])
			{
				a++;
			}
			else
				break;
		}
		for (b = 0; needle[b]; b++)
		{
			return (haystack + a);
		}

	}
	return (0);
}
