#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - contains vital information for a given dog
 * @name: dog name
 * @age: dog age
 * @owner: name of owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

#endif
