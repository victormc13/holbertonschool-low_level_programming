#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints numbers, from 0 to 14, followed by a new line.
 * Description: prints 10 times numbers from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int i = 0, j, k;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			k = j;
			while (k > 0)
			{
				_putchar(k % 10 + '0');
				k /= 10;
			}

			j++;
		}

		_putchar('\n');
		i++;
	}

	_putchar('\n');
}
