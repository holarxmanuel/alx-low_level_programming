/* _strpbrk.c */
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The characters to search for
 *
 * Return: one of the bytes in accept.
 *         If no match is found, NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s) != NULL)
			return (s);
		s++;
	}
	return (NULL);
}
