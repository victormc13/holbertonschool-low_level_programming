#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if is a digit
 * @c: character to be tested
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	int digit;

	if (c >= '0' && c <= '9')
		uppercase = 1;
	else
		uppercase = 0;

	return (uppercase);
}

