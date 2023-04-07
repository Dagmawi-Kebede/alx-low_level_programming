#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: number
 * @r: recursion
 *
 * Return: the natural square root of a number and -1 if n does
 * not have a natural square root
 *
 */
int power_operation(int n, int r)
{
	if (r % (n / r) == 0)
	{
		if (r * (n / r) == n)
			return (r);
		else
			return (-1);
	}
	return (0 + power_operation(n, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: the natural square root of a number
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
