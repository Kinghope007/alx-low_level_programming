#include "main.h"

/**
 * _memcpy - fill memory with constant bytes
 * @dest: memory area
 * @src: memory area
 * @n: bytes from memory to copy
 * Return: memory are replaced
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < n; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
