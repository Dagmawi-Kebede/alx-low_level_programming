#include "main.h"/*Import the local header file main.h*/

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('0' + (n % 10));
	}
	return (n % 10);
}
