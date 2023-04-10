#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		current = n >> 1;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar("0");
		}
	}
	if (!count)
		_putchar("0");
}
