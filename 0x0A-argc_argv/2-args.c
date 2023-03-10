#include <stdio.h>

/**
 * main - prints all the arguments it recieved
 * @argc: number of arguments received in the code
 * @argv: array pointing to the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
