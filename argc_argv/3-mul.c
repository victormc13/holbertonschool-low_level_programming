#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if everything works, otherwise 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
