#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: integer
 * Return: integer
*/
int factorial(int n)
{
	int a;

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		a = n * factorial(n - 1);
	}
			return (a);

}
