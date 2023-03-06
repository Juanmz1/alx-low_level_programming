#include "main.h"

/**
 * *_strstr -  function that locates a substring.
 * @haystack: string
 * @needle: string
 * Return: Returns a pointer to the beginning of the located substring,
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0,  b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b]  == needle[b])
				a++;

			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
