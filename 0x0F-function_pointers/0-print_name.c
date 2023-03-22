#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: string to print
 * @f: function of the name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
		f(name);
}
