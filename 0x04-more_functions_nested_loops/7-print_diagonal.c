#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal n times.
 * @n: is the number of times the character \ should be printed.
 *
 * Return: none
 *
 */
void print_diagonal(int n)
{
	int h, v;

	for (h = 0; h < n; h++)
	{
		for (v = 0; v < n; v++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (h < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
