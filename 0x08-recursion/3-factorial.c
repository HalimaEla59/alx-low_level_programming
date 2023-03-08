#include "main.h"

/**
 * factorial - returns the factorial of a givn number
 * @n: the given number
 * Return: -1 if n is ower than 0 otherwise the result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
