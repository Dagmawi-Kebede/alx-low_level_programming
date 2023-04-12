#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size
 *
 * Return: pointer to the allocated memory and if
 * malloc fails, normal process termination with status
 * value is equal to 98
 *
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
