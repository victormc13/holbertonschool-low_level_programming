#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int ll;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(li));
	printf("Size of a long long int: %i byte(s)\n", sizeof(ll));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
