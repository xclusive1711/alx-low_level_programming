#include "main.h"

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 **/

void print_number(int n)
{
<<<<<<< HEAD
	unsigned int n1;

	n1 = n;
=======
	unsigned int num = n;
>>>>>>> f1f6411a7d9bd99d1fbf09bab7e3e7186d4b5fed

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

<<<<<<< HEAD
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
=======
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
>>>>>>> f1f6411a7d9bd99d1fbf09bab7e3e7186d4b5fed
}
