#include "3-calc.h"

/**
 * op_add - sumof two intergers
 * @a: first interger
 * @b: secound interger
 * Return: sum of intergers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate difference between intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: subtraction value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple two intergers
 * @a: first interger
 * @b: second interger
 * Return: multiplication value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide one interger from another
 * @a: first interger
 * @b: second interger
 * Return: division value
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division
 * @a: first interger
 * @b: seconf interger
 *
 * Return: remainder from the division b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
