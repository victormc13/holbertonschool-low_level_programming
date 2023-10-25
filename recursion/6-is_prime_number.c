#include "main.h"

/**
 * is_prime_number - Check if `n` is a prime number
 * @n: number to be checked
 * Return: 1 if `n` is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Check some base cases for prime numbers
 * @n: number to check
 * @i: helper parameter
 * Return: 1 or 0 after check for prime numbers cases
 */

int is_prime_helper(int n, int i)
{
	if (i <= 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 2));
}
