#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: a pointer to the allocated memory
 * if malloc fails, fct cause normal process termination 
 * with a status value of 98
 */

void *malloc_checker(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
