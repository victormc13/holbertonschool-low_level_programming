#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string as parameter to get the length
 * Return: length of string 's'.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
