#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Return: the length of string
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
