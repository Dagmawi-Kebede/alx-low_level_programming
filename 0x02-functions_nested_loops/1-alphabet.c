#include "main.h"/*Import the local header file main.h*/

/**
 * print_alphabet - Prints the alphabet, in lowercase.
 *
 * Return: none;
 *
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
