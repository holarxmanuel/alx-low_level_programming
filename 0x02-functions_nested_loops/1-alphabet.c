#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
