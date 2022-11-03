#include "main.h"

/**
 * prime - checks if the input is a prim
 * @n: input
 * @c: iterate
 * Return: 1 if n is prime  otherwise 0
 */
int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}

/**
 * is_prime_number - checks if its a prime number
 * @n: the nmber
 * Return: 1 if n is prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
