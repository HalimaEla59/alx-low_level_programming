#include <stdio.h>

/**
 * main - main entry
 * Return: 0
 *
 */

int main(void)
{
	int a = 2;
	long n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
