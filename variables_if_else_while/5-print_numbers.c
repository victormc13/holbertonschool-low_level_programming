#include <stdio.h>

/**
 * main - Prints all single digit numbers of base `10` from `0`
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%i", n);
	}
	putchar('\n');
	return (0);
}
