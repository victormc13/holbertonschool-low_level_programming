#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: character to be tested
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int uppercase = 0;

	if (c >= 'A')
		uppercase = 1;

	return (uppercase);
}

