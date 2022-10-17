#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		if (i < 10)
		{
			char number = i + 48;

			putchar(number);
		}
		else
		{
			for (j = 97; j <= 102; j++)
			{
				char alphabet = j;

				putchar(alphabet);
			}
		}
	}
	putchar('\n');
	return (0);
}
