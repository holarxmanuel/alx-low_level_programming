#include "main.h"

/**
 * _print_rev_recursion - this prints a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_Rev_recursion(s + 1);
		_putchar(*s);
	}
}
