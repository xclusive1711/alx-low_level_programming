#include "main.h"

/**
 * print_square - prints a square followed by a line
 * @size: shows the size of the square
 * Return: void(no return)
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 0; b < size; b++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
