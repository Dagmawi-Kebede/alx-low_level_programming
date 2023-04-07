#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 * Return: the length of a string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @r1: recursion 1
 * @r2: recursion 2
 *
 * Return: Always 0
 *
 */
int comparator(char *s, int r1, int r2)
{
	if (*(s + r1) == *(s + r2))
	{
		if (r1 == r2 || r1 == r2 + 1)
			return (1);
		return (0 + comparator(s, r1 + 1, r2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 *
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
