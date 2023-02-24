#include "main.h"

/**
 * _isdigit - to check for digit
 * @c: char to be check
 *
 * Return:Returns 1 if c is a digit, Returns 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
