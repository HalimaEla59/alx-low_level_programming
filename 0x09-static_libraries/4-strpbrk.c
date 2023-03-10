#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates the first occurance in s of any bytes in accept
 * @s: string
 * @accept: string
 * Return: pointer to a byte of s that matches one of accept, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
