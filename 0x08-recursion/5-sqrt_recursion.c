#include "main.h"

/**
 * _sqrt - square root
 * @n: base number
 * @i: iterator number
 * Return: i
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculate the sqaure of n
 * @n: base number
 * Return: the suare root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
i}
