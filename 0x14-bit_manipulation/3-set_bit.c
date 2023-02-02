#include "main.h"

/**
 * set_bit - function that sets bit to 1 at index
 * @n: denotes number
 * @index: index within binary number
 * Return: return 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	num <<= index;

	*n = *n | num;
	return (1);
}
