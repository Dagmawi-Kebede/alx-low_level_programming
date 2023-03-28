#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: none
 *
 */
void swap_int(int *a, int *b)
{
	int placeHolder = *a;
	*a = *b;
	*b = placeHolder;
}
