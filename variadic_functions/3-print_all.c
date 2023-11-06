#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;
	char *separator = "";

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				{
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";

					printf("%s%s", separator, str);
				}
				break;
			default:
				i++;
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}

