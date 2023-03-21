#include "main.h"/*Import the local header file main.h*/

/**
 * _abs - Computes the absolute value of an integer.
 * @n: integer number.
 *
 * Return: absolute value of n.
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
