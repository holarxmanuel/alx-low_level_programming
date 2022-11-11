#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory
 * @b: number of bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
