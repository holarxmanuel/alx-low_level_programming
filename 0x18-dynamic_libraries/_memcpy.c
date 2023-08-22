#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (start);
}
