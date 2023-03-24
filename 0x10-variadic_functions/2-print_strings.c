#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of strings
 */

void print_strings(char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;
	char *s;

	if (separator == NULL || n == 0)
		return;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(vl, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(vl);
}
