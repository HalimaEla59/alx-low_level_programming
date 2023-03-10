#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers stored in an int as well as the result
 * @argc: arguments
 * @argv: array pointing to the arguments
 * atoi() fct that converts strings to ints
 * Return: 0 or 1 if error
 */

int main(int argc, char **argv)
{
	int i;
	int r = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			r *= atoi(argv[i]);
		}
		printf("%d\n", r);
	}
	return (0);
}
