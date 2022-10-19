#include "main.h"

/**
 * print_alphabet - a - z in lower case
 * author: indiya Reuben
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}

