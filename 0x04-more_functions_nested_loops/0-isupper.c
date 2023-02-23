#include "main.h"

/**
 * _isupper - check for uppercase char
 * @c: the char to be check
 *
 * Return:Returns 1 if c is uppercase, Returns 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
