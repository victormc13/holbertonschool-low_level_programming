#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to `stdout`.
 * @s: string to be printed
 * Return: Nothing
 */

void _puts(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	_putchar('\n');
}
