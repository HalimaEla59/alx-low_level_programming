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
		char *operation;

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		operation = argv[2];

		if ((*operation == '/' || *operation == '%') && (b == 0))
		{
			printf("Error\n");
			exit(100);
		}

		fct = get_op_func(operation);
		printf("%d\n", fct(a, b));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
