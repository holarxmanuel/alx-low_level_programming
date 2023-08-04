#include "main.h"

/**
 * right_pbin - recursion  to print bit 0
 * @n: type const int
 */

void right_pbin(unsigned long int n)
{
	if (n == 0)
		return;
	right_pbin(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary formof a number
 * @n: type const int
 * Return: binary n
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		right_pbin(n);
}
