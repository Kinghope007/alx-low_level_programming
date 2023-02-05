#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s)
	{
		length = strlen(_strlen_re3cursion(s));
		s++;
	}
	return (length);
}


