#include <stdio.h>
/**
 *  main - entry point
 *
 *  Return: always returns 0
 *
 */
int main(void)
{
	char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = 'a';
	for (i = 0; i < 6; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
