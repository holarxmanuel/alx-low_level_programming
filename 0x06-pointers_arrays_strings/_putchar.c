#include <unistd.h>

/**
 *
 * putchar - writes the character
 * @c: arguement
 * Return : 1 0n sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
