#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
*/
int main(void)
{
	int s = 97;
	int e = 122;

	while (s <= e)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
