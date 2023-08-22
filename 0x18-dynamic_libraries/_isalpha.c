#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((_islower(c) || _isupper(c)));
}
