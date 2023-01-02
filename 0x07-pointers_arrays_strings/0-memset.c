#include "main.h"

/**
 * _memset - fill memory with bytes
 * @s: memory to be filled
 * @b: constant bytes
 * @n: number of bytesin memory
 * Return: *s
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
