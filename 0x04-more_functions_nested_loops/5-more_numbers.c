#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: none
 *
 */
void more_numbers(void)
{
	int t, n;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
