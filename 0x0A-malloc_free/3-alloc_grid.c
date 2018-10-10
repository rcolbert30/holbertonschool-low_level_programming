#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that return a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **m;
	int k, z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int *) * height); /* making space for array of pointers */
	if (m == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		m[k] = malloc(sizeof(int) * width); /* making space for value of pointers */
		if (m[k] == NULL)
		{
			while (k >= 0)
				k--; /* frees up each allocated space */
				free(m[z]);
			free(m);
			return (NULL);
		}
		for (z = 0; z < width; z++)
		{
			m[k][z] = 0;
		}
	}
	return (m);
}
