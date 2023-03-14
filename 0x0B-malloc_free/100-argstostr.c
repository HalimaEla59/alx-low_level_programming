#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all the program arguments
 * @ac: argc
 * @av: argv
 * Return: NULL if ac=0 or av=NULL or fail, pointer to str
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j;
	int size = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	size = size + (ac + 1);
	s = malloc(sizeof(char) * size);
	
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
