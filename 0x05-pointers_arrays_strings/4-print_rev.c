#include "main.h"

/**
 * print_rev.c - prints a string, in reverse,
 * followed by a new line.
 * @s: variable pointer to s
 * Return: void(no return)
 */

void print_rev(char *s)
{
	int start;

	/*finds the length of string character without null character*/
	for (start = 0; s[start] != '\0'; ++start)
		;

	/*print char from the last index as you decrement*/
	for (start = 0; start >= 0; --start)
		_putchar(s[start]);
	_putchar('\n');

}
