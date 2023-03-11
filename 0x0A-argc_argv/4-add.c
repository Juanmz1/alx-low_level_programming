#include <stdio.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: arguments count
 * @argv: arrays of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *flag;
	int i, n, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}


