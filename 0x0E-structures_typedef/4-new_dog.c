#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: NULL if fail, else new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i;
	int l1 = 0;
	int l2 = 0;
	char *n, *o;

	for (i = 0; name[i] != '\0'; i++)
		l1++;
	for (i = 0; owner[i] != '\0'; i++)
		l2++;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	n = malloc(sizeof(char) * (l1 + 1));
	if (n == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		n[i] = name[i];
	n[i] = '\0';
	doggy->name = n;

	doggy->age = age;

	o = malloc(sizeof(char) * (l2 + 1));
	if (o == NULL)
	{
		free(n);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		o[i] = owner[i];
	o[i] = '\0';
	doggy->owner = o;

	return (doggy);
}
