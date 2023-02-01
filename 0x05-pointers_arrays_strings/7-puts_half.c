#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int length;
	int mid;

	length = strlen(str);
	if (length % 2 == 1)
	{
		mid = length / 2 + 1;
	}
	else
	{
		mid = length / 2;
	}
	for (i = mid; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
