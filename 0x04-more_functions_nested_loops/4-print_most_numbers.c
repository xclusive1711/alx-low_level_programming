#include "main.h"

/**
 * void print_most_numbers - prints 0 to 9
 * followed by a new line
 * Return: no returns
 */

void print_most_numbers(void);
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		else
			printf("%d", num);
	}
		_putchar(num);
		_putchar(\n);
