#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main fct
 * @argc: arguments
 * @argv: array of arg
 * Return: depends
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*fct)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		fct = get_op_func(argv[2]);

		if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		printf("%d\n", fct(a, b));
		return (0);
	}
	
	printf("Error\n");
	exit(98);
}
