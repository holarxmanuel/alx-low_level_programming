#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input 1
 * @s2: input 2
 * Return: the diffrence in s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2 != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[j]);
		}
		i++;
	}
	return (0);
}
