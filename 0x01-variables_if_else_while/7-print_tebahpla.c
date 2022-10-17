#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		char mirror_alpha = ch;

		putchar(mirror_alpha);
	}
	putchar('\n');
	return (0);
}
