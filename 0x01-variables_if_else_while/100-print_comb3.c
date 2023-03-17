#include <stdio.h>

/**
 * main - entry point and prints all possible
 * different combinations of two digits.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int d0;
	int d1;

	for (d1 = '0' ; d1 <= '9' ; d1++)
	{
		for (d0 = d1 + 1 ; d0 <= '9' ; d0++)
		{
			putchar(d1);
			putchar(d0);

			if (d1 != '8' || d0 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
