#include "main.h"

/**
 * _puts - this prints a string to the stout
 * @str: the input
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
