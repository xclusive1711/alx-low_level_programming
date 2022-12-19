#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: swapped value1
 * @b: swapped value2
 * Return: void(no return)
 */

void swap_int(int *a, int *b);
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
