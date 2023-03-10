#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers, prints 0 if no numb given
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0, 1 if error
 */

int main(int argc, char **argv)
{
	int i;
	int s = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
		return(1);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
