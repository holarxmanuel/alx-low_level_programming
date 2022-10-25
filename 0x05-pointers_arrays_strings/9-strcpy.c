#include "main.h"

/**
 * _strcpy - copied the string pointed to by src
 * @dest: this is an input
 * @src : an input
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}

	*(dest + l) = '\0';
	return (dest);
}
