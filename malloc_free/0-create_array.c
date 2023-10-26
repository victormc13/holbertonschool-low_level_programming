#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initiallizes it with
 * a specific char.
 * @size: size of the array
 * @c: Initial character
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int counter = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (counter < size)
		{
			ptr[counter] = c;
			counter++;
		}
	}
	return (ptr);
}

