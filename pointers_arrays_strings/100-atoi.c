#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: string to be converted
 * Return: integers from the string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		sign++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (result * 10 + (*s - '0')))
		{
			return (0);
		}

		result = result * 10 + (*s - '0');
		s++;
	}
	return result * sign;
}
