#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int i = 0x1234567;
	char *ptr = &i;

	if (i == 0x123)
	{
		return (1);
	}
	else
	{
		return (0):
	}
}
