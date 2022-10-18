#include "main.h"

/**
 * _isalpha - checks if our iput is an alphabet
 * @c: the functions arguement
 * Return: 1 if c is a letter otherwise 0
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
