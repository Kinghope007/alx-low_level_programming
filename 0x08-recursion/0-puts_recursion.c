#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: pointer to char
 * Return: NULL
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	else
	{
		_putchar('\n');
	}
	_puts_recursion(s);
}
