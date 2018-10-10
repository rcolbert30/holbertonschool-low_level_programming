#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	k  = malloc(size * sizeof(*k));
	if (k == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		k[i] = c;
		i++;
	}
	return (k);
}
