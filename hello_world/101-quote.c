#include <unistd.h>

/**
 * main - prints string to the standard error
 * Return: 1
 */

int main(void)
{
	const char message[];

	message[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}

