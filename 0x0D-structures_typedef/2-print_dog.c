#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return 0
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->age == 0 || d->owner == NULL)
	{
		printf("nil");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
