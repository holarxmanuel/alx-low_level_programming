#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area to fill
 * @b: Byte to fill with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
