#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return:  a pointer to the first occurrence of c.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
