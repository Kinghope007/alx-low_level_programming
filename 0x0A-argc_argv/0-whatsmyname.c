#include <stdio.h>
#include "main.h"

/**
 * main - print the name of programm
 * @argc: number of arguments
 * @argv: array of argements
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
