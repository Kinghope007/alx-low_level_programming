#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
}
