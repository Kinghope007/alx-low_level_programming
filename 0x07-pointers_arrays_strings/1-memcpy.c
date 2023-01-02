#include "main.h"

/**
 * _memset - copy memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory are copied
 * Retur: memory is replaced
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
