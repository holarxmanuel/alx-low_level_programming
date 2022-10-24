#include "main.h"

/**
 *
 * swap_int - this swaps the values of two diffrent characters
 * @a: the input
 * @b: the input
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
