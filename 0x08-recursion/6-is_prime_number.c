#include "main.h"
int checker(int n: int i);

/**
 * is_prime_number - executes the prime cecker
 * @n: given input
 * Return: 1 if prime number 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * checker - checkes if n is a prime number
 * @n: input
 * @i: in the fct above, initialised with the value of n / 2, then decrements i - 1 (we will check if > 0)
 * Return: the result
 */
int checker(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (checker(n, i - 1);
}
