#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 *
 * Return: string
 *
 */

char *leet(char *s)
{

	int l[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; l[i] != '\0'; i++)
		{
			if (s[j] == l[i])
				s[j] = n[i];
		}
	}

	return (s);
}
