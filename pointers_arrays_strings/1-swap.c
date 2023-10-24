
/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer to swap.
 * @b: second integer to swap.
 * Description: Function that swaps the values of two integers.
 * At this case integer a by integer b.
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

