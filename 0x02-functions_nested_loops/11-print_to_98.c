#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from specific arguements to 98
 * @n: the arguement
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", n + i);
	}
	_putchar('\n');
}
