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
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
