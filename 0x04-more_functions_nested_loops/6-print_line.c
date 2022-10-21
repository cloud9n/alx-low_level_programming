#include "main.h"

/**
 * print_line - this print lines
 * @n: is tge nuber of times lines will be
 * printed.
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

