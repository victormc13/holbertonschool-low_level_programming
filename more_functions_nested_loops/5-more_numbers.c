#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints numbers, from 0 to 14, followed by a new line.
 * Description: prints 10 times numbers from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar((j % 10) / 10 + '0');
			j++;
		}

		_putchar('\n');
		i++;
	}

	_putchar('\n');
}
