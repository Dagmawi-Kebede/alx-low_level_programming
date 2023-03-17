#include <stdio.h>

/**
 * main - entry point and prints all single digit numbers
 * of base 10 starting from 0.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int d;

	for (d = 0 ; d < 10 ; d++)
		putchar('0' + d);
	putchar('\n');
	return (0);
}
