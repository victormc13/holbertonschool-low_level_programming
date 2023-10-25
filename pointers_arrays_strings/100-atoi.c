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

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';
		
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			if (sign == 1)
			{
				return INT_MAX;
			}
			else
			{
				return INT_MIN;
			}
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
