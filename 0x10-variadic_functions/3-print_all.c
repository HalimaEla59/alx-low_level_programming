#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list vl;
	int i, n;
	char *separator;
	char *s;

	va_start(vl, format);
	i = 0;
	n = 0;
	separator = ", ";

	while (format && format[n])
		n++;

	while (format && format[i])
	{
		if (i == (n - 1))
			separator = "";

		switch format[i]
		{
		case 'c':
			printf("%c%s", va_arg(vl, char), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(vl, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(vl, float), separator);
			break;
		case 's':
			s = va_arg(vl, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, separator);
			break;
		}
		i++;
	}

	printf("\n");
	va_end(vl);
}
