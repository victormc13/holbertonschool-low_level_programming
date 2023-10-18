#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of the number in varaible n
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit;
	char message[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Check the last digit */
	last_digit = n % 10;

	if (last_digit > 5)
		printf("%s%i is %i and is greater than 5\n", message, n, last_digit);

	else if ((last_digit < 6) && last_digit != 0)
	{
		printf("%s%i is %i and is less than 6 and not 0\n", message, n, last_digit);
	}
	else
		printf("%s%i is %i and is 0\n", message, n, last_digit);
	return (0);
}
