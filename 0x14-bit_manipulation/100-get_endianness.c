#include "main.h"

/**
 * get_endianness - function that checks if
 * multibyte data is the endianness.
 * Return: return If big-endian - 0, if little-endian -1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (1);
}
