#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints 'n' elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%i", a[i]);
		}
		else
		{
			printf("%i, ", a[i]);
		}
		i++;
	}
	i++;
	printf('\n');
}


