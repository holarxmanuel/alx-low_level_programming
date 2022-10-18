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
	int i;

	for (i = 0; i < 10; i++)
	{
	
		last_digit = n % 10;

		if (last_digit == i)
		{
			_putchar(48 + i);
			break;
		}
	}
	return (last_digit);
}
