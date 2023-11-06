#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Functions that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int number;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		printf("%d", number);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
