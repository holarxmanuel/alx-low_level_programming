#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this returns a pointer to a new space
 * @str: the string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *copy_str;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	copy_str = (char *)malloc(sizeof(char) * (i + 1));

	if (copy_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		copy_str[j] = str[j];

	return (copy_str);
}
