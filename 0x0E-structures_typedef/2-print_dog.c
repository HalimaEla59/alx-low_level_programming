#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			Name = "(nil)";
		printf("Name: %s\n", d->name);

		if (d->age < 0)
			printf("Age: (nil)\n");
		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			Owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
