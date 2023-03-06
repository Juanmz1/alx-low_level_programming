#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: consist of byte
 * Return: return the num of byte
*/
unsigned int _strspn(char *s, char *accept)
{
	int z = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					z++;
			}
		}
		else
			return (z);
	}
	return (z);
}
