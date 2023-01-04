#include "main.h"

/**
 * _pow_recursion - the value of x raised to the pow y
 * @x: the number of increment
 * @y: -1 if y is <0
 * Return: the value 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
