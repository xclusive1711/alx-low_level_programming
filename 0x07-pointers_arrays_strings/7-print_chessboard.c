#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{

	int n, b;



	n = 0;

	while (n < 8)

	{

		b = 0;

		while (b < 8)

		{

			_putchar (a[n][b]);

			b++;

		}

		_putchar ('\n');
		n++;
	}
}
