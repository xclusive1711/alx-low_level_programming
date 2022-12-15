#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to be printed
 * Return: void(no returns)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
