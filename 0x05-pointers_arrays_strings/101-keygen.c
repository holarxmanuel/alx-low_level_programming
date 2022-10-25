#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This functions genrates a key
 * Return: 0
 *
 */
int main(void)
{
	int a = 0, b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
			break;
		b = b + a;
		printf("%b", a);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
