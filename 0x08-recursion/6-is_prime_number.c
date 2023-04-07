#include "main.h"

/**
 * is_prime - checks for prime number.
 * @n: number
 * @r: recursion
 *
 * Return: 1 if the input integer is a prime number, 0 otherwise
 *
 */
int is_prime(unsigned int n, unsigned int r)
{
	if (n % r == 0)
	{
		if (n == r)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, r + 1));
}
/**
 * is_prime_number - checks for prime number.
 * @n: number
 *
 * Return: 1 if the input integer is a prime number. 0 otherwise
 *
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
