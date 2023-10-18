#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and reverse
 * Return: 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}

