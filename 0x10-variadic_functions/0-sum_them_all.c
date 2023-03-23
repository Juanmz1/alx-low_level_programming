#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: unsigned int const argument
 * @...: ellipsis
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	int sum = 0;

	va_start(ls, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls, unsigned int);
		return (sum);
	}
	va_end(ls);
}
