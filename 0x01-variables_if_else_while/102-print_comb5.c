#include <stdio.h>

/**
 * main - entry point and prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int dd1;
	int dd2;

	for (dd1 = 0 ; dd1 <= 99 ; dd1++)
	{
		for (dd2 = dd1 + 1 ; dd2 <= 99 ; dd2++)
		{
			putchar(dd1 / 10 + '0');
			putchar(dd1 % 10 + '0');
			putchar(' ');
			putchar(dd2 / 10 + '0');
			putchar(dd2 % 10 + '0');

			if (!(dd1 == 98 && dd2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
