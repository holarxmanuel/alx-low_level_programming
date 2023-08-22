#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (start);
}
