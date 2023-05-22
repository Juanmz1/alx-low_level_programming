#include "main.h"

/**
 * _isalpha - check for alphabet char
 * @c: is the char to be check
 *
 * Return: 1 if the charc is lowercase or uppercase, otherwise 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
