#include "main.h"

/**
 * power - this returns the square root of the number
 * @n: input
 * @c: iterator
 * Return: square root of -1
 */
int power(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power(n, c + 1));
}
/**
 * _sqrt_recursion - gitves the natural square root
 * @n: number
 * Return:  1 if it has a square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
