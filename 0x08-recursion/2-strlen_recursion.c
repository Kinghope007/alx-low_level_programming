#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (!*s)
	{
		return (0);
	}
	l++;
	return (l + _strlen_recursion(s + 1));
}
