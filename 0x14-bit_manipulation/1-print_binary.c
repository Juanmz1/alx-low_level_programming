#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be printed
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int rev;

	while (rev <= n)
	{
		rev <<= 1;
	}
	rev >>= 1;
	while (rev > 0)
	{
		if (n & rev)
		{
			_putchar("1");
		}
		else
			_putchar("0");
	}
	rev >>= 1;
}
