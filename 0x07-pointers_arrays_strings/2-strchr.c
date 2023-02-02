#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: the string from character found
 */

char *_strchr(char *s, char c)
{
	int str;

	str = strchr(s, c);
	while (s++)
	{
		if (s == str)
		{
			return (s - 1);
		}
		if (s != str)
		{
			return (NULL);
		}
	}
}
