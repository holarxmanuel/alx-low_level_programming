#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input 1
 * @s2: input 2
 * Return: the diffrence in s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == )
	{
		if  (*(s1 + i) == '\0') && (*(s2 + i) == '\0')
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (j);
}
