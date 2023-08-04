#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: type const char pointer
 * Return: converted number, or 0 if one or more char in strring b that isn't 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int decimalc = 0;

	if (b == NULL)
		return 0;
	while (*(b + number) != '\0')
	{
		if (*(b + number) != '0' && *(b + number) != '1')
			return (0);
		decimal <<= 1;
		if (*(b + number) == '1')
			decimal ^= 1;
		number++;
	}
	return (decimal);
}
