#include "main.h"
#include <stdio.h>

/**
 * print_array - this prints n elements of a n array
 * @n: the input
 * @a: the input also
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(",");

	}
	printf("\n");
}

