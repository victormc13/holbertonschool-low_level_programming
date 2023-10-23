#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints numbers, from 0 to 14, followed by a new line.
 * Description: prints 10 times numbers from 0 to 14
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(i + '0');
			_putchar('\n');
			j++
		}

		i++;
	}

	_putchar('\n');
}