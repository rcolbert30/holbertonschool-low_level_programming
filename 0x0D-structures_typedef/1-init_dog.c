#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer
 * @name: char pointer
 * @age: int
 * @owner: char pointer
 * Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		free(d);
		return;
	}
}
