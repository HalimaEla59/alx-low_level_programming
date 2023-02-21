#include "main.h"
/**
 * times_table - prints 9 time table
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			if (j == 0)
			{
				_putchar('0');
			} else if (k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
		}
		_putchar('\n');
	}
}

