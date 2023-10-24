#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line, to `stdout`.
 * @s: string to be printed in reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
