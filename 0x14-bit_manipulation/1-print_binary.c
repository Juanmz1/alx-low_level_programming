#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int rem = 1;
	int i = 0;

	rem <<= (sizeof(unsigned long int * 8) - 1);

	while (rem > 0)
	{
		if (n & rem)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		rem >>= 1;
	}
}
