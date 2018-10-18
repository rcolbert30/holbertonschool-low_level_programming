#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function that compares values
 * Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (w = 0; w < size; w++)
	{
		if ((*cmp)(array[w]) != 0)
		{
			return (w);
		}
	}
	return (-1);
}

