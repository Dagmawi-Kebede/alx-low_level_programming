#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, p;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		p = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				p = 0;
				break;
			}
		}
		if (p == 1)
			break;
	}
	return (i);
}
