#include "main.h"/*Import the local header file main.h*/

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: none;
 *
 */
void print_alphabet_x10(void)
{
	char alphabet;
	char time;

	for (time = 0; time <= 9; time++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
