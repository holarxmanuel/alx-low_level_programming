#include "main.h"

/**
 * get_endianness - sets the value of a bit to 1
 * Return: 1 if little 0 if big
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *q = (char *)&p;

	if (*q)
		return (1);
	return (0);
}
