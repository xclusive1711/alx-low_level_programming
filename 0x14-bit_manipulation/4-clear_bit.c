#include "main.h"

/**
 * clear_bit - function that clear bit to 0 at a given index
 * @n: denotes number
 * @index: index within binary number
 * Return: returns 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))

		return (-1);

	num = ~(num << index);

	*n = *n & num;

	return (1);

}
