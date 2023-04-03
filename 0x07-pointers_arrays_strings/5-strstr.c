#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of located substring,
 * or NULL if the substring is not found.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *ph;
	char *pn;

	while (*haystack != '\0')
	{
		ph = haystack;
		pn = needle;

		while (*haystack != '\0' && *pn != '\0' && *haystack == *pn)
		{
			haystack++;
			pn++;
		}
		if (!*pn)
			return (ph);
		haystack = ph + 1;
	}
	return (0);
}
