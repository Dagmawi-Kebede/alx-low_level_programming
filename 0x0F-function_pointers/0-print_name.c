#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name
 * @f: function pointer
 *
 * Return: none
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
