#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: number of ints passed to fct
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(vl);
}
