#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: a pointer to a const char
 * @n: unsigned int const
 * @...: ellipsis
 * return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, unsigned int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
