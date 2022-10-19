#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from specific arguements to 98
 * @n: the arguement
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{

		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
		printf("%d", n);
	_putchar('\n');
}
