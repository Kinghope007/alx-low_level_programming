#include "_putchar.h"

/**
 * main - print point 
 * Description: Print _putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	char *hp = "_putchar";

	while (*hp)
	{
		_putchar(*hp);
		hp++;
	}
	_putchar('\n');

	return (0);
}
