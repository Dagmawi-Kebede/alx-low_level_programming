#include "main.h"/*Import the local header file main.h*/

/**
 * _isalpha - Checks for alphabetic character.
 * @c: checked character
 *
 * Return: 1 if c is a letter,lowercase or uppercase. Or 0 if false
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
