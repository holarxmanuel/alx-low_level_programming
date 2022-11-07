#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the result
 */
char *str_concat(char *s1, char *s2)
{
	char *conout;
	unsigned int i, j, k, ending;

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	conout = malloc(sizeof(char) * (i + j +));

	if (conout == NULL)
	{
		free(conout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		conout[k] = s1[k];

	ending = j;
	for (j = 0; j <= ending; k++, j++)
		conout[k] = s2[j];

	return (conout);
}
