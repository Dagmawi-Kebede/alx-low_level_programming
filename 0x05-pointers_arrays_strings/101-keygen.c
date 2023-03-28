#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords.
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	int r = 0, p = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (p < 2772)
	{
		r = rand() % 128;
		if ((p + r) > 2772)
			break;
		p = p + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - p));
	return (0);
}
