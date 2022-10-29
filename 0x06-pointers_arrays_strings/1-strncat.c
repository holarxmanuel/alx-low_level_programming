#include "main.h"

/**
 * _strncat - This concatinats two strings
 * @dest: the destination
 * @src: the origin
 * @n: the input
 * Return: returns the pointer to dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
