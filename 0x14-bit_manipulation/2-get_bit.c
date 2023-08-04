#include "main.h"

/**
 * get_bit - return the value of a bit
 * @n: type unsigned long int
 * @index: type unsigned int of unit
 * Return: the value of  an index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
