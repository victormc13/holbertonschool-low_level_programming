#include <stdio.h>

/**
 * int_index - Searches for an integer.
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Index of the first element for which the `cmp`
 * function does not return `0`
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int index;

	if (size <= 0 )
		index = -1;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			index = i;
		}
	}
	return (index);
}

