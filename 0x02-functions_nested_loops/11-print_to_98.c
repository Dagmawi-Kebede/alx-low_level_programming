#include "main.h"/*Import the local header file main.h*/
#include "6-abs.c"/*Import the program to computes the absolute value*/
#include <stdio.h>/*Import the standard input-output header*/

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: starting number
 *
 * Return: none
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
