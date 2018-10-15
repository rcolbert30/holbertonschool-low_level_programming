#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - finds length of string
 *@s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		;
	}
	return (k);
}

/**
 *_strcpy - copies the length of a string
 *@src: string
 *@dest: copy destination
 *Return: Alwasy 0.
 */

char *_strcpy(char *dest, char *src)
{
	int k, d;

	for (d = 0; src[d] != '\0'; d++)
		;
	for (k = 0; k <= d; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}

