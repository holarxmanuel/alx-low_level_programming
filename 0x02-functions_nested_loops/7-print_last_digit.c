#include "main.h"

/**
 * print_last_digit - this prints the last digit of a number
 * @n: this is arguement of the function
 * Return: This returns the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit  = n % 10;
	if (last_digit < 0)
	{
		_putchar(-last_digit + 48);
		return (-last_digit);
	}
	else
	{
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
