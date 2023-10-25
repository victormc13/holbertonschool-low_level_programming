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
	return (_sqrt_getter(n, 1));
}

int _sqrt_getter(int n, int guess)
{
	if (guess * guess == n)
	{
		return guess;
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_getter(n, guess + 1));
}

