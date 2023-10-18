#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
