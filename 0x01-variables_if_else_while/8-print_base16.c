#include <stdio.h>

/**
 * main - entry point and prints all the numbers
 * of base 16 in lowercase.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int n_09 = '0';
	int l_af = 'a';

	while (n_09 <= '9')
	{
		putchar(n_09);
		n_09++;
	}

	while (l_af <= 'f')
	{
		putchar(l_af);
		l_af++;
	}

	putchar('\n');

	return (0);
}
