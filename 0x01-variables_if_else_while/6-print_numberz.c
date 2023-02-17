#include <stdio.h>
/**
 *  main - entry point
 *
 *  Return: always returns 0
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}
