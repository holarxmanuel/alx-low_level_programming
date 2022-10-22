#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: 1 or 0
 * @c: the arguement
 */
int _isdigit(int c)
{
	if  (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
