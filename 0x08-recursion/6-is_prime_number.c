#include "main.h"
int checker(int n, int i);

/**
 * is_prime_number - executes the prime cecker
 * @n: given input
 * Return: 1 if prime number 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;
	
	if (n < 2)
		return (0);
	return (checker(n, i));
}

/**
 * checker - checkes if n is a prime number
 * @n: input
 * @i: will be initialized by 2, then increments until n
 * Return: 1 if prime, 0 otherwise
 */
int checker(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (checker(n, i + 1));
	return (1);
}
