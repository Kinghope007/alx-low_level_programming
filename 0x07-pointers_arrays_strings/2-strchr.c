#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	while (s[i])
	{
		for (j = 0; j <= i; j++)
		{
			if (c == s[j])
				return (s - 1);
		}
		i++;
	}
	return ("NULL");
}
