#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The input string
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
