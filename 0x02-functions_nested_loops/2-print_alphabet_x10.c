#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: always returns 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
