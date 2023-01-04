#include "main.h"

/**
 * factorial - function that return the facorial of a num
 * @n: -1  if num is 0
 * Return: the value factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return ( n * factorial(n - 1));
}
