#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *find = needle;

		while (*haystack && *find && *haystack == *find)
		{
			haystack++;
			find++;
		}

		if (!*find)
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
