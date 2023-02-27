#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the second half of a string
 *
 * @str: pointer char
 */

void puts_half(char *str)
{
	int i;
	int n;

	if (_strlen(str) % 2 == 0)
	{
		n = _strlen(str) / 2;

		for (i = n; i < _strlen(str); i++)
			_putchar(str[i]);
	}
	else
	{
		n = (_strlen(s) - 1 ) / 2;

		for (i = n; i < _strlen(str); i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
