#include "main.h"

/**
 * void print_numbers - prints number from 0 to 9
 * followed by a new line
 * Return: no returns
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num);
	_putchar('\n');
}
