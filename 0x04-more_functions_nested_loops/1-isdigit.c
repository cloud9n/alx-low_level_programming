#include "main.h"

/**
 * _isdigit - function that checks for digits
 * 0 through 9
 * Return: 1 when c is a digit else 0
 * @c: is the character to check
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
