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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
