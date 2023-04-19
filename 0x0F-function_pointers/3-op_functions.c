#include "3-calc.h"

/**
 * op_add - calculates the sum.
 * @a: number 1
 * @b: number 2
 *
 * Return: sum
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference.
 * @a: number 1
 * @b: number 2
 *
 * Return: difference
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product.
 * @a: number 1
 * @b: number 2
 *
 * Return: product
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient.
 * @a: number 1
 * @b: number 2
 *
 * Return: quotient
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module.
 * @a: number 1
 * @b: number 2
 *
 * Return: module
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
