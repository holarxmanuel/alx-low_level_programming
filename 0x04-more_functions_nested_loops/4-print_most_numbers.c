#include "main.h"

/**
 * print_most_numbers - this function prints njmbers except 2 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
