#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - define a new type with the elements
 * name,age and owner.
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
