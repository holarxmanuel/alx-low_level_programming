#include "main.h"

/**
 * _pow_recursion - this raise the value of a number
 * @x: the base number
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
