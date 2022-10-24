#include "main.h"

/**
 *  _strlen - this function retrurns the length of the striring
 *  @s: the input
 *  Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
