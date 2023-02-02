#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that converts unsigned int to binary
 * @n: unsigned int
 * Return: returns binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
