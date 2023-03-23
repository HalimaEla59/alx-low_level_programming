#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all the parametrs
 * @n: variadic constant
 * Return: the result, 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list vl;

	if (n == 0)
		return (0);

	va_start (vl, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vl, const unsigned int);
	}

	va_end(vl);

	return (sum);
}
