#include "main.h"

/**
 * flip_bits - Returns the number of bits  to be flipped
 * @n: type unsigned input pointer
 * @m: type unsigned long int positiont
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	unsigned int flip;

	p = n ^ m;
	flip = 0;
	while (p > 0)
	{
		if ((p & 1) != 0)
			flip++;
		p = p >> 1;
	}
	return (flip);
}
