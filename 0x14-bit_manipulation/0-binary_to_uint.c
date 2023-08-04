#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char or string
 * Return: converted number or 0 if there is an inconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cumm, point;
	int lent;

	if (b == NULL)
		return (0);

	for (lent = 0; b[lent]; lent++)
	{
		if (b[lent] != '0' && b[lent] != '1')
			return (0);
	}

	for (point = 1, cumm = 0, lent--; lent >= 0; lent--, point *= 2)
	{
		if (b[lent] == '1')
			cumm += point;
	}

	return (cumm);
}
