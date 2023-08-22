#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @s: The input string
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
