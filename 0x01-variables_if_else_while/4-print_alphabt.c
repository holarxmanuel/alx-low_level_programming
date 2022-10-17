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
		if (ch != 'q' && ch != 'e')
		{
			char alphabet_low = ch;

			putchar(alphabet_low);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
