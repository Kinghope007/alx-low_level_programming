#include "main.h"

/**
 * _strncpy - two words
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: int params
 * Return: *dest
 */

char *_ strncpy9char(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
