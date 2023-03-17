#include <stdio.h>
/**
 * main - entry point and prints all letters in an alphabet
 * in lowercase except q and e.
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
