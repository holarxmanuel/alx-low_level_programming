#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array and initializes it
 * @size: this is the size of the type
 * @c: this is the character
 * Return: this returns sz
 */
char *create_array(unsigned int size, char c)
{
	char *sz;
	unsigned int i;

	if (size == 0)
		return (NULL);
	sz = malloc(sizeof(c) * size);

	if (sz == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		sz[i] = c;

	return (sz);
}
