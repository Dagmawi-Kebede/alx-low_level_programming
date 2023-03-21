#include "main.h"/*Import the local header file main.h*/

/**
 * _islower - Checks for lowercase character.
 * @c: checked character
 *
 * Return: 1 if true, 0 if false
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
