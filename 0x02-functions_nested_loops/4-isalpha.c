#include "main.h"

/**
 * _isalpha - checks for character alphabet
 * 0c: character to be checked
 * Return: 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
