#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: type unsigned long int input
 * @index: type unsigned int position
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (62 + 1))
		return (-1);
	*n |= 1 << index;
	return (1);
}
