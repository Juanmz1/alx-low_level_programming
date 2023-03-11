#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: arguments count
 * @argv: arrays of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int x, y;

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);

	return (0);
}
