#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
