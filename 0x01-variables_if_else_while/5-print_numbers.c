#include <stdio.h>

/**
 * main-  main entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int number = i;

		putchar(number);
	}
	putchar('\n');
	return (0);
}
