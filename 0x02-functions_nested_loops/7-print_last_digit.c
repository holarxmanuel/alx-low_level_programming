#include "main.h"

/**
 * print_last_digit - this prints the last digit of a number
 * @n: this is arguement of the function
 * Return: This returns the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	int last_digit_value = 48;

	_putchar(last_digit_value += last_digit);
	return (last_digit);
}
