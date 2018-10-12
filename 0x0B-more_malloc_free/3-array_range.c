#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: minimum values
 * @max: maximum values
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a;
	int b = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = min; a < (max - min + 1); a++)
	{
		ptr[b] = a;
		b++;
	}
	return (ptr);
}
