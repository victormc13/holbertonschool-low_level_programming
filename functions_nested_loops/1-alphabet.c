#include "main.h"

/**
 * main - Print the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
