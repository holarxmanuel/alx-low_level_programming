#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		char alphabet_low = ch;

		putchar(alphabet_low);
		ch++;
	}
	return (0);
}
