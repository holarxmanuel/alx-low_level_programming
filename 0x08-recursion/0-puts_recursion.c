#include "main.h"

/**
 * _puts_recursion - this prints a string
 * @s: this is the input
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_puchar('\n');
}
