#include "main.h"
int is_perfect_squarre(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given number
 * Return: if n does not have a natural square numb -1, the result otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (is_perfect_square(n, (n + 1) / 2));
}

/**
 * is_perfect_square - checks if the squarre is perfect
 * @n: the given numb
 * @i: counter*
 * Return: the result
 */

int is_perfect_square(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (is_perfect_square(n, i - 1));
}
