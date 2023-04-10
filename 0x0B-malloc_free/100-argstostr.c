#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument
 * @av: argument
 *
 * Return: pointer to a new string, or NULL if it fails
 *
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	s = malloc((c + 1) * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			s[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			aout[k] = av[i][j];
	}
	aout[k] = '\0';

	return (s);
}
