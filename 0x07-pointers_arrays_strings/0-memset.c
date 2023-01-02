#include "main.h"
#include <stdio.h>

/**
 * _memset - fill memory with bytes
 * @s: memory to be filled
 * @b: constant bytes
 * @n: number of bytesin memory
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	       *(s + i)	= b;
	}

	return (s);
}
