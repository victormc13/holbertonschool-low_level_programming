#include "function_pointers.h"

/**
 * print_name - Function that prints a name that receives as parameter
 * @name: name to print
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
