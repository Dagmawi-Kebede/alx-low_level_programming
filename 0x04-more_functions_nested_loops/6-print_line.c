#include "main.h"

/**
 * print_line - draws a straight line in the terminal n times.
 * @n: is the number of times the character _ should be printed.
 *
 * Return: none
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
