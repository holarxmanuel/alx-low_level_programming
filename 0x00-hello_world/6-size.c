#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char char_type;
	int int_type;
	long long_type;
	long long long_long_type;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));

	return (0);
}
