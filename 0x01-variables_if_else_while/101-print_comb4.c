#include <stdio.h>
/**
 *  main - entry point
 *
 *  Return: always returns 0
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 10; i < 20; i++)
	{
		for (j = 10; j < 20; i++)
		{
			for (k = 10; k < 20; k++)
			{
				if (k > j && j >i)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');
					if ((i % 10) != 7 || (j % 10) != 8 || (k % 10) != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
