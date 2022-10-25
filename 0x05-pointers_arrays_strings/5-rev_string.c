#include "main.h"

/**
 * rev_string - it reverses a string
 * @s: input
 * Return: reverse
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		reverse - s[i];
		s[i] = s[c];
		s[c] = reverse;
	}
}
