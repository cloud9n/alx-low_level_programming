#include "main.h"

/**
 * _islower - check c if its lower case
 * author: indiya Reuben
 * c
 * C - is what wee will be checking
 * Return: 1 if statement is true and 0 if not
 * _islower
 * C: is what we are checking
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

