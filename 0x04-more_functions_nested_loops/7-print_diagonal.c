#include "main.h"

/**
 * print_diagonal - diagonal lines to be
 * printed.
 * @n: this is the input variable
 *
 * Return: the return value is void
 *
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');

		}

		_putchar('\n');
		_putchar('\n');
	}
}
