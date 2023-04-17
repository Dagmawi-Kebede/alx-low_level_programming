#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL if the function fails
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	d *p;
	int i, n, o;

	p = malloc(sizeof(*p));
	if (p == NULL || !(name) || !(owner))
	{
		free(p);
		return (NULL);
	}

	for (n = 0; name[n]; n++)
		;

	for (o = 0; owner[o]; o++)
		;

	p->name = malloc(n + 1);
	p->owner = malloc(o + 1);

	if (!(p->name) || !(p->owner))
	{
		free(p->owner);
		free(p->name);
		free(p);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';

	p->age = age;

	for (i = 0; i < o; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';

	return (p);
}
