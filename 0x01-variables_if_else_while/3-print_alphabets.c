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
	ch = 'A';
	while (ch <= 'Z')
	{
		char alphabet_high = ch;

		putchar(alphabet_high);
		ch++;
	}
	putchar('\n');
	return (0);
}
