#include "main.h"

/**
 * _islower - check if a char is lowercase
 * @c: is the char to be check
 *
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
