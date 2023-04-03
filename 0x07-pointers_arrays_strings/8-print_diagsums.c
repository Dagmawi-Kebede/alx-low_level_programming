#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: matrix size
 *
 * Return: none
 *
 */
void print_diagsums(int *a, int size)
{
	int i, c = 0, d = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			c += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			d += *(a + i);
	}
	printf("%d, %d\n", c, d);
}
