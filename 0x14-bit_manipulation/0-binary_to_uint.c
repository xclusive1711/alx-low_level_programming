#include "main.h"

/**
 * binary_to_uint- function that convert binary to unsigned int
 * @b: denotes binary
 * Return: returns unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int night = 0, i;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[night] != '\0')
		night++;
	night -= 1;
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (non_binary);

		if (b[i] == '1')
			number += (1 * (1 << night));
		i++;

		night--;
	}
	return (number);
}
