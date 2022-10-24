#include <unisted.h>

/**
 * _putchar - writes charcter  c to stdout
 * @c: char
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
