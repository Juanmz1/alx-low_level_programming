#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: pointer to a char string
 * @n: unsigned int argument
 * @...: ellipsis
 * Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	char *string;
	unsigned int i;

	va_start(ls, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		string = va_arg(ls, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
