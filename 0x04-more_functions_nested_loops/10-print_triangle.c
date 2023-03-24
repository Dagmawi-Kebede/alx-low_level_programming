#include "main.h"

/**
 * print_triangle - prints a triangle using the character #.
 * @size: numbers of lines.
 *
 * Return: none
 *
 */
void print_triangle(int size)
{
	int h, v;

	for (h = 0; h < size; h++)
	{
		for (v = 1; v < (size - h); v++)
			_putchar(' ');
		for (v--; v < size; v++)
			_putchar(35);
		if (h < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
