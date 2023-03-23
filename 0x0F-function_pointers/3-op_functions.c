#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns a+b
 * @a: 1st int
 * @b: 2nd int
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns a-b
 * @a: 1st int
 * @b: 2nd int
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns a*b
 * @a: 1st int
 * @b: 2nd int
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns a/b
 * @a: 1st int
 * @b: 2nd int
 * Return: a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns a%b
 * @a: 1st int
 * @b: 2nd int
 * Return: a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
