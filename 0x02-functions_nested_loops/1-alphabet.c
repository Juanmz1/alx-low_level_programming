#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
*/
print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
