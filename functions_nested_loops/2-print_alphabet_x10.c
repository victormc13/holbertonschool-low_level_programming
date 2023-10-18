#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		print_alphabet();
		times++;
	}
}
