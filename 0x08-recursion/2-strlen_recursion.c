#include "main.h"

/**
 * _strlen_recursion - this prints the length of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		int i;

		i++;
		_strlen_recursion(s + 1);
	}
	_putchar('\n');
	return (i);
}
