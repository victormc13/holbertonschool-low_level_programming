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
	long long ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(li));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long) sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
}
