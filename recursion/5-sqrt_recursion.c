#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number to get the natural square root
 * Return: the result of the power
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (n ** 1/2);
}

