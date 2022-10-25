#include "main.h"

/**
 * puts2 - prints every other character of a sring
 * @str: input
 *
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\n'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
