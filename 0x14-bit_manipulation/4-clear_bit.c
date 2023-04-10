#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to checked
 * @index: checking the bit of n
 * return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rev;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	rev = ~(1 << index);
	*n = *n & rev;

	return (1);
}
