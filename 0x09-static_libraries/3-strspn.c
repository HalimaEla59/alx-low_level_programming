#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string
 * @accept: contains the bytes to be accepted
 * Return: the numbr of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int r = 0;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}
		}
		if (s[j] == '\0')
		{
			return (r);
		}
	}
	return (r);
}
