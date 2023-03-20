#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a struct dog variable
 * @d: struct dog variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
