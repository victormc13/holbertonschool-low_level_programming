#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, 1 if fails
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int num_of_coins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1])
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5; i++)
		{
			while (cents >= coins[i])
			{	
				cents -= coins[i];
				num_of_coins++;
			}
		}
	}

	printf("%d\n", num_of_coins);
	return (0);
}

