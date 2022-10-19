#include "main.h"

/**
 * print_sign -print a sign of numbers
 * Return: the return is 1 or 0, -1 and n
 * @n: this is the number to be checked
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
}
