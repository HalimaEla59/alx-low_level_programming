#include "main.h"
#include "2-strlen.c"
/**
 * _puts - prints a string
 *
 * @str: pointer char
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
