#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string and char
 * Return: converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != 1)
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		convert <<= 1;
		if (b[i] == '1')
			convert += 1;
	}

	return (convert);
}
