#include <stdio.h>

/**
 * main - entry point and prints all possible cominations
 * of single-digit numbers.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int d = '0';

	do {
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	} while (d <= '9');
	putchar('\n');
	return (0);
}
