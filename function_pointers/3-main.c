#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);
	int result;

	int (*operation)(int, int);

	if (argc == 3)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(operator);
	result = operation(num1, num2);
	
	printf("%d\n", result);

	return (0);
}
