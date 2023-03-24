#include "main.h"

/**
 * print_square - prints a square using the character #.
 * @size: size of the square.
 *
 * Return: none
 *
 */
void print_square(int size)
{
	int h, v;

	for (h = 0; h < size; h++)
	{
		for (v = 0; v < size; v++)
		{
			_putchar(35);
		}
		if (h != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
