#include "main.h"
/**
 * _abs - function that computes the abdolute value
 *
 * @n: the given number
 *
 * Return: the given n or n*(-1)
 *
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * (-1));
}
