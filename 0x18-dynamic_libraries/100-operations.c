#include "100-operations.h"

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between the two integers.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * division - Divides two integers.
 * @a: The first integer.
 * @b: The second integer (non-zero).
 *
 * Return: The result of the division.
 */
int division(int a, int b)
{
	return (a / b);
}

/**
 * mod - Computes the modulus of two integers.
 * @a: The first integer.
 * @b: The second integer (non-zero).
 *
 * Return: The remainder after division.
 */
int mod(int a, int b)
{
	return (a % b);
}
