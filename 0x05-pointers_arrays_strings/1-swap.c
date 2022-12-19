/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 *
 * @a: input value 1
 * @b: input value 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
