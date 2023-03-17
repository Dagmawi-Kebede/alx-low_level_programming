#include <stdio.h>

/**
 * main - entry point and prints all possible different
 * combinations of three digits.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int d0;
	int d1;
	int d2;

	for (d2 = '0' ; d2 <= '9' ; d2++)
	{
		for (d1 = d2 + 1 ; d1 <= '9' ; d1++)
		{
			for (d0 = d1 + 1 ; d0 <= '9' ; d0++)
			{
				putchar(d2);
				putchar(d1);
				putchar(d0);
				if (d2 != '7' || d1 != '8' || d0 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
