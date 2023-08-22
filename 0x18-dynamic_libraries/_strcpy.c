#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
