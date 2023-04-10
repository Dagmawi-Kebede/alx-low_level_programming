#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width
 * @height: height
 *
 * Return: pointer to a 2 dimensional array of integers,
 * NULL if width or height is 0 or negative
 *
 */
int **alloc_grid(int width, int height)
{
	int **d;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	d = malloc(height * sizeof(int *));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int));
		if (d[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(d[i]);
			free(d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			d[i][j] = 0;

	return (d);
}
