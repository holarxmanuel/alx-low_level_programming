#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}
