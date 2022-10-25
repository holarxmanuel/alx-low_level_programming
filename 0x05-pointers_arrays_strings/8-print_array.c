#include "main.h"
#include <stdio.h>

/**
 * print_array - this prints n elements of a n array
 * @n: the input
 */
void print_array(int *a, int n)
{
	int i;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(",");

	}
	printf("\n");
}

