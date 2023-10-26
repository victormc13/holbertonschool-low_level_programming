#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if evrything works, otherwise 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j;
		int num;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!is_digit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);

		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_digit - Checks if a char if a digit
 * @c: character to be cheked
 * Return: 1 if is a digit, otherwise 0
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
