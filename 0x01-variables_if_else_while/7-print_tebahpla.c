#include <stdio.h>

/**
 * main - entry point and prints the lowercase alphabet in reverse.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
