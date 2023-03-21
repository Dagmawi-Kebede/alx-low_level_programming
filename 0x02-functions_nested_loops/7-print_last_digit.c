#include "main.h"/*Import the local header file main.h*/
#include "6-abs.c"/*Import the program to computes the absolute value*/

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
