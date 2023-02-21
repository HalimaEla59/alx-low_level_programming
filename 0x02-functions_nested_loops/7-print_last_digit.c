#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digits of a number
 *
 * @n: the given number
 *
 * Return: the last digit of the given number
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + (_abs(n % 10)));
	return (_abs(n % 10));
}
