#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Prints a square, followed by a new line.
 * @size: size of the square
 * Return: Nothing
 */

void print_diagonal(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
