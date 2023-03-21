#include "main.h"/*Import the local header file main.h*/

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: none
 *
 */
void times_table(void)
{
	int r;
	int c;
	int t;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			t = (r * c);

			if (c == 0)
			{
				_putchar('0' + t);
			}
			else if (t <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + t);
			}
			else if (t > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (t / 10));
				_putchar('0' + (t % 10));
			}
		}
		_putchar('\n');
	}
}
