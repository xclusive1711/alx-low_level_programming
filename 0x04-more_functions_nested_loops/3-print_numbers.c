#include "main.h"

/**
 * void print_numbers - prints number from 0 to 9
 * followed by a new line
 * Return: no returns
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
