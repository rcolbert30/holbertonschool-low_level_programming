#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array
 * @size: size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int k;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < nmemb * size; k++)
		ptr[k] = 0;
	return (ptr);
}

