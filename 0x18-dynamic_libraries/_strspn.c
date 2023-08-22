#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 *            which consists entirely of bytes from accept.
 * @s: Input string
 * @accept: Set of accepted bytes
 *
 * Return: Number of bytes in the initial segment of s which consist of accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
			break;
		s++;
		accept = accept - count;
	}
	return (count);
}
