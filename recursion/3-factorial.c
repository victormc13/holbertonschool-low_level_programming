#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: number to get the factorial
 * Return: factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
