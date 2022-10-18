#include "main.h"

/**
 * print_sign - prits the sign of a number
 * Return: 1 if positve 0 if zero - if negative
 * @n: this is our functions arguement
 */
int print_sign(int n)
{
	char pos = 43;
	char zero = 48;
	char neg = 45;

	if (n > 0)
	{
		_putchar(pos);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(zero);
		return (0);
	}
	else
	{
		_putchar(neg);
		return (-1);
	}
}
